cmake_minimum_required(VERSION 3.16)
project(slogi)

set(CMAKE_CXX_STANDARD 20)

include(${CMAKE_BINARY_DIR}/conan_paths.cmake)

find_package(Boost REQUIRED)
find_package(fmt REQUIRED)
find_package(SDL2 REQUIRED)

add_executable(slogi src/main.cpp)

target_link_libraries(slogi PRIVATE Boost::boost fmt::fmt-header-only SDL2::SDL2)