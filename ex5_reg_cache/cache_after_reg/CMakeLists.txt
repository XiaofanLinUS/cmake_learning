cmake_minimum_required(VERSION 2.8.9)
project(foo NONE)

set(A "Regular Value")

add_subdirectory(boo)

message("[foo] A = ${A}")
