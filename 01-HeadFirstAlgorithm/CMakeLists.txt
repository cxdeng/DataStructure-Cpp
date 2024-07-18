cmake_minimum_required(VERSION 3.28)

project(01-HeadFirstAlgorithm)

set(CMAKE_CXX_STANDARD 14)


# Enable Test
enable_testing()

# Find Google Test installed on the system
find_package(GTest REQUIRED)

# Add a subdirectory
add_subdirectory(src)
add_subdirectory(test)