# DataStructure-Cpp

This repository contains C++ implementations of various data structures and algorithms, including recursive algorithms and sorting techniques. The project is organized into several subdirectories, each focusing on different sets of problems and solutions.

## Project Structure

```plaintext
.
├── 01-HeadFirstAlgorithm
│   ├── bin
│   ├── build
│   │   ├── build.sh
│   │   ├── clean.sh
│   │   └── CMakeLists.txt
│   ├── include
│   │   └── BinarySearch.h
│   ├── lib
│   ├── src
│   │   ├── BinarySearch.cpp
│   │   └── CMakeLists.txt
│   └── test
│       ├── BinarySearchTest.cpp
│       └── CMakeLists.txt
│       └── test.sh
├── LeetCode
│   ├── src
│   │   ├── BinarySearch_704.cpp
│   │   ├── FindFirstAndLastPositionOfElementInSortedArray_34.cpp
│   │   └── SearchInsertPosition_35.cpp
├── Recursion
│   ├── bin
│   ├── build
│   │   ├── build.sh
│   │   ├── clean.sh
│   │   └── CMakeLists.txt
│   ├── include
│   │   ├── BubbleSort.h
│   │   ├── Factorial.h
│   │   ├── Fibonacci.h
│   │   └── InsertionSort.h
│   ├── lib
│   ├── src
│   │   ├── BubbleSort.cpp
│   │   ├── CMakeLists.txt
│   │   ├── Factorial.cpp
│   │   ├── Fibonacci.cpp
│   │   └── InsertionSort.cpp
│   └── test
│       ├── BubbleSortTest.cpp
│       ├── CMakeLists.txt
│       ├── FactorialTest.cpp
│       ├── FibonacciTest.cpp
│       └── InsertionSortTest.cpp
│       └── test.sh
├── LICENSE
├── README.md
```

## Getting Started

### Prerequisites

Make sure you have the following installed:
- [CMake](https://cmake.org/): A cross-platform, open-source build system.
- [GNU Make](https://www.gnu.org/software/make/): A build automation tool that automatically builds executable programs and libraries from source code by reading files called Makefiles.
- [GCC](https://gcc.gnu.org/) or another C++ compiler: A compiler system produced by the GNU Project supporting various programming languages, including C and C++.

### Building the Project

Navigate to the project directory and execute the build script:

```bash
./build.sh
```

### Cleaning the Project

To clean the build artifacts, run the clean script:

```bash
./clean.sh
```

### Running Tests

To run the tests, execute the test script:

```bash
./test.sh
```

## Directory Details

### 01-HeadFirstAlgorithm

This directory contains implementations related to introductory algorithms, including binary search.

- **bin**: This directory is intended to hold the compiled binary files after building the project.
- **build**: Contains scripts and files related to building the project.
  - **build.sh**: A script to compile and build the project.
  - **clean.sh**: A script to clean up build artifacts.
  - **CMakeLists.txt**: CMake configuration file for building the project.
- **include**: Contains header files for the algorithms.
  - **BinarySearch.h**: Header file for the Binary Search algorithm.
- **lib**: This directory is intended to hold the compiled libraries.
- **src**: Contains the source files implementing the algorithms.
  - **BinarySearch.cpp**: Source file for the Binary Search algorithm.
  - **CMakeLists.txt**: CMake configuration file for the source files.
- **test**: Contains unit tests for the algorithms.
  - **BinarySearchTest.cpp**: Unit test file for Binary Search algorithm.
  - **CMakeLists.txt**: CMake configuration file for the test files.
  - **test.sh**: A script to run the tests.

### LeetCode

This directory includes solutions to various LeetCode problems.

- **src**: Contains source files with solutions to LeetCode problems.
  - **BinarySearch_704.cpp**: Solution for LeetCode problem 704 (Binary Search).
  - **FindFirstAndLastPositionOfElementInSortedArray_34.cpp**: Solution for LeetCode problem 34 (Find First and Last Position of Element in Sorted Array).
  - **SearchInsertPosition_35.cpp**: Solution for LeetCode problem 35 (Search Insert Position).

### Recursion

This directory contains recursive algorithm implementations and related tests.

- **bin**: This directory is intended to hold the compiled binary files after building the project.
- **build**: Contains scripts and files related to building the project.
  - **build.sh**: A script to compile and build the project.
  - **clean.sh**: A script to clean up build artifacts.
  - **CMakeLists.txt**: CMake configuration file for building the project.
- **include**: Contains header files for the recursive algorithms.
  - **BubbleSort.h**: Header file for the Bubble Sort algorithm.
  - **Factorial.h**: Header file for the Factorial algorithm.
  - **Fibonacci.h**: Header file for the Fibonacci algorithm.
  - **InsertionSort.h**: Header file for the Insertion Sort algorithm.
- **lib**: This directory is intended to hold the compiled libraries.
- **src**: Contains the source files implementing the recursive algorithms.
  - **BubbleSort.cpp**: Source file for the Bubble Sort algorithm.
  - **CMakeLists.txt**: CMake configuration file for the source files.
  - **Factorial.cpp**: Source file for the Factorial algorithm.
  - **Fibonacci.cpp**: Source file for the Fibonacci algorithm.
  - **InsertionSort.cpp**: Source file for the Insertion Sort algorithm.
- **test**: Contains unit tests for the recursive algorithms.
  - **BubbleSortTest.cpp**: Unit test file for Bubble Sort algorithm.
  - **CMakeLists.txt**: CMake configuration file for the test files.
  - **FactorialTest.cpp**: Unit test file for Factorial algorithm.
  - **FibonacciTest.cpp**: Unit test file for Fibonacci algorithm.
  - **InsertionSortTest.cpp**: Unit test file for Insertion Sort algorithm.
  - **test.sh**: A script to run the tests.

## License

This project is licensed under the Apache License 2.0. See the [LICENSE](LICENSE) file for details.

## README

For detailed information about the project, see the [README.md](README.md) file.

## Acknowledgements

Inspired by various data structure and algorithm resources and problems from LeetCode.
```

This guide provides a detailed explanation of each part of the project structure, as well as steps for building, cleaning, and testing the project. Adjust the content as necessary to fit the specific details of your project.
```