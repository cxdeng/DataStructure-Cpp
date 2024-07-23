cmake_minimum_required(VERSION 3.28)

project(Recursion-test)

aux_source_directory(${CMAKE_CURRENT_SOURCE_DIR} TEST_SRC)

include_directories(${CMAKE_SOURCE_DIR}/include)

link_directories(${CMAKE_SOURCE_DIR}/lib)

set(EXECUTABLE_OUTPUT_PATH ${CMAKE_SOURCE_DIR}/bin)

# 添加BubbleSort测试文件
set(BUBBLESORT_TEST_SOURCES
    BubbleSortTest.cpp
)

# 添加InsertionSort测试文件
set(INSERTIONSORT_TEST_SOURCES
    InsertionSortTest.cpp
)

# 添加Factorial测试文件
set(FACTORIAL_TEST_SOURCES
    FactorialTest.cpp
)

# 添加Factorial测试文件
set(FibonacciTest_TEST_SOURCES
    FibonacciTest.cpp
)

# 添加BubbleSort测试可执行文件
add_executable(BubbleSortTest ${BUBBLESORT_TEST_SOURCES})

# 添加InsertionSort测试可执行文件
add_executable(InsertionSortTest ${INSERTIONSORT_TEST_SOURCES})

# 添加Factorial测试可执行文件
add_executable(FactorialTest ${FACTORIAL_TEST_SOURCES})

# 添加Fibonacci测试可执行文件
add_executable(FibonacciTest ${FibonacciTest_TEST_SOURCES})

# 链接Google Test库和被测试的库
target_link_libraries(BubbleSortTest ${GTEST_LIBRARIES} pthread RecursionLib)
target_link_libraries(InsertionSortTest ${GTEST_LIBRARIES} pthread RecursionLib)
target_link_libraries(FactorialTest ${GTEST_LIBRARIES} pthread RecursionLib)
target_link_libraries(FibonacciTest ${GTEST_LIBRARIES} pthread RecursionLib)


# # Adding tests to CTest
include(GoogleTest)
gtest_discover_tests(BubbleSortTest)
gtest_discover_tests(InsertionSortTest)
gtest_discover_tests(FactorialTest)
gtest_discover_tests(FibonacciTest)