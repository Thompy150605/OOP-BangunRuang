cmake_minimum_required(VERSION 3.24)
project(HitungBangunRuang)
 
# Our Project
set(SOURCE_FILES
    Main.cpp
    Balok.cpp
    Kubus.cpp
    Silinder.cpp
    BangunRuang.cpp)
 
add_executable(${PROJECT_NAME} ${SOURCE_FILES})