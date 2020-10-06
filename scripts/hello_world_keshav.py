#LANGUAGE: Python Using TensorFlow
#AUTHOR: Keshav
#GITHUB: https://github.com/keshavgbpecdelhi

import tensorflow as tf
x = tf.placeholder(tf.string)

with tf.Session() as sess:
    output = sess.run(x, feed_dict={x: 'Hello World'})
