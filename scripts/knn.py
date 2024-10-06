#### Name: [negativenagesh](https://github.com/negativenagesh)
#- Place: Bengaluru, India
#- Bio: Data Science Student  
#- GitHub: [negativenagesh](https://github.com/negativenagesh)

# my_knn/knn.py

import numpy as np
from collections import Counter

class KNNClassifier:
    def __init__(self, k=3):
        """
        Initialize the KNN classifier with the number of neighbors.

        Parameters:
        k (int): The number of neighbors to consider for classification.
        """
        self.k = k

    def fit(self, X, y):
        """
        Fit the model using the training data.

        Parameters:
        X (numpy.ndarray): Training data features.
        y (numpy.ndarray): Training data labels.
        """
        self.X_train = X
        self.y_train = y

    def predict(self, X):
        """
        Predict the class labels for the provided data.

        Parameters:
        X (numpy.ndarray): Test data features.

        Returns:
        numpy.ndarray: Predicted class labels.
        """
        predictions = [self._predict(x) for x in X]
        return np.array(predictions)

    def _predict(self, x):
        """
        Predict the class label for a single instance.

        Parameters:
        x (numpy.ndarray): A single instance.

        Returns:
        int: Predicted class label.
        """
        # Calculate the Euclidean distances from x to all training samples
        distances = np.linalg.norm(self.X_train - x, axis=1)
        # Get indices of the k nearest neighbors
        k_indices = np.argsort(distances)[:self.k]
        # Get the labels of the k nearest neighbors
        k_nearest_labels = [self.y_train[i] for i in k_indices]
        # Return the most common class label
        most_common = Counter(k_nearest_labels).most_common(1)
        return most_common[0][0]

def normalize_data(X):
    """
    Normalize the dataset.

    Parameters:
    X (numpy.ndarray): Data to be normalized.

    Returns:
    numpy.ndarray: Normalized data.
    """
    return (X - np.mean(X, axis=0)) / np.std(X, axis=0)

# Example usage
if __name__ == "__main__":
    # Sample dataset
    X_train = np.array([[1, 2], [2, 3], [3, 3], [5, 6], [6, 5], [7, 8]])
    y_train = np.array([0, 0, 0, 1, 1, 1])  # Class labels

    X_test = np.array([[1, 2], [4, 5], [7, 7]])

    # Normalize data
    X_train_normalized = normalize_data(X_train)
    X_test_normalized = normalize_data(X_test)

    # Create KNN classifier
    classifier = KNNClassifier(k=3)
    classifier.fit(X_train_normalized, y_train)
    predictions = classifier.predict(X_test_normalized)

    print("Predictions:", predictions)
