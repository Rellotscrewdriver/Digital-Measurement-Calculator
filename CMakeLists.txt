cmake_minimum_required(VERSION 3.12)

#add the project and it's version number
project("DIC" VERSION 2.0)

#artifically increasing the requirements to make people contribute in my repo
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

#credits to arsenic, taken this line from https://github.com/Arsenic-ATG/Text-Editor/blob/master/CMakeLists.txt
file(GLOB_RECURSE SOURCE_FILES RELATIVE ${CMAKE_SOURCE_DIR} "src/*.cpp" "src/Include/*.h")

add_executable("DIC" ${SOURCE_FILES})