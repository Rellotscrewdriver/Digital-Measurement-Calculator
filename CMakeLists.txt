cmake_minimum_required(VERSION 3.12)

#add the project and it's version number
project("DIC" VERSION 2.0)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

#credits to arsenic
file(GLOB_RECURSE SOURCE_FILE RELATIVE ${CMAKE_SOURCE_DIR} "src/*.cpp" "src/Include/*.h")

add_executable("DIC" ${SOURCE_FILE})