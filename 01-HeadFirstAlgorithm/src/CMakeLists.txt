cmake_minimum_required(VERSION 3.28)

project(01-HeadFirstAlgorithm-src)

aux_source_directory(${CMAKE_CURRENT_SOURCE_DIR} SRC)

include_directories(${CMAKE_SOURCE_DIR}/include)

set(LIBRARY_OUTPUT_PATH ${CMAKE_SOURCE_DIR}/lib)

add_library(HeadFirstAlgorithmLib SHARED ${SRC})