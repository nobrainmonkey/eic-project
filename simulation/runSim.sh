#!/bin/bash

EICSHELL=eic-shell
OUT_DIR=output
mkdir -p ${OUT_DIR}

ENERGY_TAB=(0.1 0.2 0.5 1.0 2.0 5.0 10.0 15.0 20.0)
source /opt/detector/setup.sh

DETECTOR_CONFIG=epic_calorimeters
SIZE_OF_ENERGY_TAB=${#ENERGY_TAB[@]}
NEVENTS=15000

for ene in "${ENERGY_TAB[@]}"
do
    SEED=$(date +%N)
    OUTPUT_FILE="${OUT_DIR}/output_${ene}_GeV_${$}.root"

    npsim --compactFile ${DETECTOR_PATH}/${DETECTOR_CONFIG}.xml --numberOfEvents ${NEVENTS} --random.seed ${SEED} --enableGun \
    --gun.particle pi+ --gun.thetaMin 130*degree --gun.thetaMax 177*degree --gun.distribution uniform \
    --gun.energy ${ene}*GeV --outputFile ${OUTPUT_FILE}

    if [ $? -ne 0 ]; then
        echo "Simulation for energy ${ene} GeV failed"
        exit 1
    fi
done

exit
#EOF
