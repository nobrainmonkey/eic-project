#!/bin/sh

export DETECTOR=epic
export DETECTOR_PATH=/home/xihe/epic/install/share/epic
export DETECTOR_CONFIG=epic
export DETECTOR_VERSION=main

## Export detector libraries
if [[ "$(uname -s)" = "Darwin" ]] || [[ "$OSTYPE" == "darwin"* ]]; then
        export DYLD_LIBRARY_PATH="/home/xihe/epic/install/lib${DYLD_LIBRARY_PATH:+:$DYLD_LIBRARY_PATH}"
else
        export LD_LIBRARY_PATH="/home/xihe/epic/install/lib${LD_LIBRARY_PATH:+:$LD_LIBRARY_PATH}"
fi
