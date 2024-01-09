# Goal

Recreate results from the following
[paper](https://arxiv.org/abs/2310.04442).

# Understanding the Paper

## Point Cloud Deep Learning Methods

[Here](http://cds.cern.ch/record/2825379/files/ATL-PHYS-PUB-2022-040.pdf)
is a previous study about this algorithm for Pion reconstruction
in the ATLAS experiment.

## Graph

* A graph is a mathematical construction of **nodes** and **edges**.
* Unlike a Eucledian structure, a graph is **invariant** under transformations that perserves topology. Therefore, graph data are usually **permuation independent**.
* This paper construct each **hit** in hcal as a node, and the **nearst $k$ spacial nodes** as edges (I have some doubts about this one).


## High Level Code Structure

The code requires three main packages (from most basic to most specific):

1. tensorflow
2. dm-sonnet
3. graph_nets

The code does the following things on a high level:

1. argument parser from yaml config file
2. create the ML model based on the config ile
3. convert `.root` files into graphs
4. input `.root` file into ML model
   1. Block training
      1. node-level perdiction
      2. global-level perdiction (summing over node-perdictions)
      3. update global perdiction
5. output results

# Data acquisition

Downloaded the data that the paper used. The goal is to reproduce the paper first, and then I can rum my own simulation and reconstruction.

# Running the code

The regression code is located [here](https://github.com/eiccodesign/regressiononly).

The data is located [here](https://zenodo.org/records/8384822).

Unfortunately the author did not provide specific versions for wheels and python. I will try to use python 3.8 with default reqirement first. If I encouter difficulties, I will email the author.

# Results
