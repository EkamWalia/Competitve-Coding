cmake_minimum_required(VERSION 3.7)
project(Introduction_to_algorithms_CLRS_)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES
        "CH-2 Getting Started/insertionsort.cpp")

add_executable(Introduction_to_algorithms_CLRS_ ${SOURCE_FILES})

add_executable(mergersort "CH-2 Getting Started/mergersort.cpp")
add_executable(mergesort_gfg "CH-2 Getting Started/mergesort_gfg.cpp")
add_executable(bfs "CH22 Elementary Graph Algorithms/bfs.cpp")