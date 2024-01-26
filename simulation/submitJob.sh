#!/bin/bash

#SBATCH --nodes=4
#SBATCH --ntasks-per-node=16
#SBATCH --cpus-per-task=1
#SBATCH --job-name=npsimEicrecon
#SBATCH --mail.type=BEGIN,END,FAIL
#SBATCH --output=out.%j 

module load singularity 
bash $HOME/eic/eic-shell -- $HOME/eic-project/simBatch.sh
