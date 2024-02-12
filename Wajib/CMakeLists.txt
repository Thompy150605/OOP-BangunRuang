cmake_minimum_required(VERSION 3.24)
project(HitungBangunRuang)
 
# Our Project
set(SOURCE_FILES
    BangunRuang.cpp
    Balok.cpp
    Kubus.cpp
    Silinder.cpp
    Main.cpp)
 
add_executable(${PROJECT_NAME} ${SOURCE_FILES})