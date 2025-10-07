cmake_minimum_required(VERSION 3.28)
project(QKD)

include_directories(actors)
include_directories(quantum_lib)


add_executable(qkd main.cpp)
