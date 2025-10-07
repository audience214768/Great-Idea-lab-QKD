cmake_minimum_required(VERSION 3.28)
project(QKD)

include_directories(actors)

add_library(actors_lib actors/sender.cpp actors/receiver.cpp actors/listener.cpp)

include_directories(quantum_lib)

add_library(qubit_lib quantum_lib/qubit.cpp)


add_executable(qkd main.cpp)

target_link_libraries(qkd actors_lib qubit_lib)
