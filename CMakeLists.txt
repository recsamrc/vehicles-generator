cmake_minimum_required(VERSION 3.14)
project(vehicle_generator)

set(CMAKE_CXX_STANDARD 14)

add_executable(vehicle_generator main.cpp NormalDistribution.cpp NormalDistribution.h VehicleGenerator.cpp VehicleGenerator.h)