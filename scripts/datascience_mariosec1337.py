#python 3.7.1

import numpy
import pandas
from sklearn.ensemble import RandomForestClassifier

def get_sensor_data():

    timesteps = 10
    times = numpy.linspace(0.1, 1.0, timesteps)
    df = pandas.DataFrame({
        'time': times,
        'sensor1': numpy.random.random(timesteps),
        'sensor2': numpy.random.random(timesteps),
        'sensor3': numpy.random.random(timesteps),
        'sensor4': numpy.random.random(timesteps), 
    })

    return df

samples = [ get_sensor_data() for _ in range(100) ]
labels = [ int(numpy.random.random() > 0.5) for _ in range(100) ]
assert len(samples) == len(labels)

print('sample from CSV file:\n', samples[0], '\nlabel', labels[0], '\n')

def to_features(data):
    # remove time column
    feature_columns = list(set(data.columns) - set(['time']))
    # TODO: do smarter feature engineering here
    sensor_values = data[feature_columns].values 
    # Note: the features must be 1D for scikit-learn classifiers
    features = sensor_values.flatten()
    assert len(features.shape) == 1, features.shape
    return features

features = numpy.stack([ to_features(d) for d in samples ])

assert features.shape[0] == len(samples)
print('Features:', features.shape, '\n', features[0])

# XXX: do train/test splits etc
est = RandomForestClassifier(n_estimators=10, min_samples_leaf=0.01)
est.fit(features, labels)
