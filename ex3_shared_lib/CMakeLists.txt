cmake_minimum_required(VERSION 2.8.9)

include_directories(include)

file(GLOB SOURCES "src/*.cpp")

add_library(test_student SHARED ${SOURCES})
