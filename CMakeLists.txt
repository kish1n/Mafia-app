cmake_minimum_required(VERSION 3.27)
project(bunker C)

set(CMAKE_C_STANDARD 11)

add_executable(bunker
        main.c
        src/person/age.c
        inc/person/age.h)
