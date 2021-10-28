cmake_minimum_required(VERSION 3.5)

project(SDL2_EXPLOSION LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(SDL2 REQUIRED)

set(SOURCE_FILES main.cpp Screen.h Screen.cpp Particle.h Particle.cpp Cloud.h Cloud.cpp)

add_executable(SDL2_EXPLOSION ${SOURCE_FILES})

target_link_libraries(SDL2_EXPLOSION SDL2::SDL2)
