from pybrain.tools.shortcuts import buildNetwork
from pybrain.datasets import SupervisedDataSet
from pybrain.supervised.trainers import BackpropTrainer

# here's the data set: ((observation vector), (result vector))
ds = SupervisedDataSet(2, 1)
ds.addSample((0, 0), (0))
ds.addSample((0, 2), (0))
ds.addSample((0, 3), (0))
ds.addSample((0, 5), (0))
ds.addSample((1, 1), (1))
ds.addSample((1, 4), (1))
ds.addSample((1, 6), (1))
ds.addSample((1, 7), (1))

# build an ANN with 2 input nodes, 3 nodes in a hidden layer, and 1 output node
ann = buildNetwork(2, 3, 1)

# train the ANN on the data
trainer = BackpropTrainer(ann, ds)
error = 1
while error > .002:
	error = trainer.train()

# predict the results of these observations
print ann.activate((0, 2)), ann.activate((1, 5))