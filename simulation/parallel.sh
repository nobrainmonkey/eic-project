#!/bin/bash
for i in {1..16}
do
   bash runSim.sh &   # Run the script in the background
done
wait   # Wait for all background processes to finish
