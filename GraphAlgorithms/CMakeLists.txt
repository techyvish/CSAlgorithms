cmake_minimum_required(VERSION 3.13)
project(GraphAlgorithms)

set(CMAKE_CXX_STANDARD 14)

add_executable(dfs dfs.cpp)
add_executable(bfs bfs.cpp)
add_executable(ConnectedComponents ConnectedComponents.cpp)