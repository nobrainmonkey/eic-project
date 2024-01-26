#!/bin/bash
#
HEADER_PATH=/usr/local/include/edm4eic/CalorimeterHitData.h

rootcling -f DictOutput.cxx -c ${HEADER_PATH} LinkDef.h

g++ -shared -fPIC -o libCalorimeterHitDataDict.so DictOutput.cxx `root-config --cflags --glibs`

