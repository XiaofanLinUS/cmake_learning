cmake_minimum_required(VERSION 2.89)
project(second)

include_directories(include)

file(GLOB SOURCES "src/*.cpp")

add_executable(test_student ${SOURCES})
