# Project specifications
cmake_minimum_required(VERSION 3.23)
project(cmake-test)

set(CMAKE_CXX_STANDARD 14)

# set the output directory for binaries to be placed in 'bin' beside each other
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/bin)
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/bin)

find_package(Eigen3 REQUIRED)

# our main library and executable
add_subdirectory(cgcustommath)
add_subdirectory(mat)
