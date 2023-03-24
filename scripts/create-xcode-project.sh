#!/bin/bash

cd ..
conan profile detect --force
conan install . -s build_type=Release --output-folder=build
conan install . -s build_type=Debug --output-folder=build
cd build
cmake .. -GXcode -DCMAKE_TOOLCHAIN_FILE="conan_toolchain.cmake"

