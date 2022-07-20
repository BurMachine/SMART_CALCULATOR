cmake_minimum_required(VERSION 3.21)
project(SMART_CALCULATOR C)

set(CMAKE_C_STANDARD 11)

add_executable(SMART_CALCULATOR calculating.c parser.c stack.c validation.c main.c)
