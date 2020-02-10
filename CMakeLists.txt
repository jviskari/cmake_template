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
add_subdirectory(apps)

enable_testing()
add_test(NAME app1 COMMAND app1)
add_test(NAME app2 COMMAND app2)
add_test(NAME app3 COMMAND app3)

