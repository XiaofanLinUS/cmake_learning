cmake_minimum_required(VERSION 2.8.9)
project(foo NONE)
set(a "1" CACHE STRING "")
set(a "2")
set(a "3" CACHE STRING "")

message("${a}")
