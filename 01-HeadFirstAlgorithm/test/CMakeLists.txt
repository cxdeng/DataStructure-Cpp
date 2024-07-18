cmake_minimum_required(VERSION 3.28)

project(01-HeadFirstAlgorithm-test)

aux_source_directory(${CMAKE_CURRENT_SOURCE_DIR} TEST_SRC)

include_directories(${CMAKE_SOURCE_DIR}/include)

link_directories(${CMAKE_SOURCE_DIR}/lib)

set(EXECUTABLE_OUTPUT_PATH ${CMAKE_SOURCE_DIR}/bin)

add_executable(BinarySearchTest ${TEST_SRC})

target_link_libraries(BinarySearchTest HeadFirstAlgorithmLib GTest::GTest GTest::Main)

# Adding tests to CTest
include(GoogleTest)
gtest_discover_tests(BinarySearchTest)