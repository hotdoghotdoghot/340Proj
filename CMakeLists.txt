cmake_minimum_required(VERSION 3.12)
project(340Proj_master)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(340Proj_master
        driver.c
        driver.h
        README.md
        tickerList.txt)
