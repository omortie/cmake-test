cmake_minimum_required(VERSION 3.23)
project(cmake-test)

set(CMAKE_CXX_STANDARD 14)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/bin)

add_subdirectory(3rdparty)

add_subdirectory(cgcustommath)
add_subdirectory(mat)
