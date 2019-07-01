from __future__ import print_function
from sklearn import svm

# the data, totally made up by travis
X = [[0, 0], [0, 2], [0, 3], [0, 5], [1, 1], [1, 4], [1, 6], [1, 7]] # X: input data, a set of observations
y = [0, 0, 0, 0, 1, 1, 1, 1] # y: output data, the class that each observation resulted in

# make our classifier and fit the data
classifier = svm.SVC()
classifier.fit(X, y)

# predict the class of this observation
print(classifier.predict([[0, 2]]), classifier.predict([[2, 5]]))