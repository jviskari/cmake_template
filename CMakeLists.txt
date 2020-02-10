cmake_minimum_required(VERSION 3.5)

# set the project name and version
project(parser VERSION 1.0)

# specify the C++ standard
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

#libraries
add_subdirectory(lib/parser)
add_subdirectory(lib/foo)

# executables
add_subdirectory(test)