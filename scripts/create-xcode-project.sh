#!/bin/bash

cd ..
mkdir xcode-build
cd xcode-build
cmake .. -GXcode -DCMAKE_C_COMPILER="$(xcrun -find cc)" -DCMAKE_CXX_COMPILER="$(xcrun -find c++)"
