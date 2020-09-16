cmake_minimum_required (VERSION 3.0.2) 
project(xml2json)

add_subdirectory(src)

include_directories(${CMAKE_CURRENT_SOURCE_DIR}/include)

add_executable(main ../xml2json.cpp)