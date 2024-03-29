#!/bin/bash

OUT_DIR=${HOME}/eic-project/simulation/output
RECO_DIR=${HOME}/eic-project/simulation/output/reco
EXTENSION=${SLURM_ARRAY_TASK_ID}

mkdir -p ${OUT_DIR}
mkdir -p ${RECO_DIR}

OUTPUT_FILE="${OUT_DIR}/MC_${EXTENSION}.root"
RECO_FILE="${RECO_DIR}/RC_${EXTENSION}.root"

source /opt/detector/setup.sh
DETECTOR_CONFIG=epic_calorimeters

NEVENTS=15000

SEED=$(date +%N)

npsim --compactFile ${DETECTOR_PATH}/${DETECTOR_CONFIG}.xml --numberOfEvents ${NEVENTS} --random.seed ${SEED} --enableGun \
  --gun.particle pi+ --gun.thetaMin 130*degree --gun.thetaMax 177*degree --gun.distribution uniform \
  --gun.momentumMin 0.1*GeV --gun.momentumMax 20*GeV --outputFile ${OUTPUT_FILE}

if [ $? -ne 0 ]; then
  echo "Simulation failed!"
  exit 1
fi

cd output 

eicrecon -Ppodio:output_include_collections=HcalEndcapNRecHits,EcalEndcapNRecHits,MCParticles ${OUTPUT_FILE} -Ppodio:output_file=${RECO_FILE}

if [ $? -ne 0 ]; then
  echo "Reconstruction failed!"
  exit 1
fi

exit
#EOF
