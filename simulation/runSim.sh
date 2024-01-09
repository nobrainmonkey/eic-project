
#!/bin/bash

EICSHELL=eic-shell
OUT_DIR=output
mkdir -p ${OUT_DIR}

ENERGY_TAB=(97 202 92 73 48 155 155 145 178 150 144 102 109 144 104 136 81 139 92 29)
source /opt/detector/setup.sh

DETECTOR_CONFIG=epic_calorimeters
SIZE_OF_ENERGY_TAB=${#ENERGY_TAB[@]}
NEVENTS=$(( 50000 / SIZE_OF_ENERGY_TAB ))

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
