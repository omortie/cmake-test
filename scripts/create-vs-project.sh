#!/bin/bash

cd ..
pip install conan
conan profile detect --force
conan install . -s build_type=Release --output-folder=build
conan install . -s build_type=Debug --output-folder=build
cd build
cmake .. -G "Visual Studio 17 2022" -DCMAKE_TOOLCHAIN_FILE="conan_toolchain.cmake"
