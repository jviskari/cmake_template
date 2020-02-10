add_executable(test test.cpp)
target_link_libraries(test parser)

add_executable(testfoo testfoo.cpp)
target_link_libraries(testfoo foo)

add_executable(testall testall.cpp)
target_link_libraries(testall foo parser)