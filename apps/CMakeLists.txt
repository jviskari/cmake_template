add_executable(app1 test.cpp)
target_link_libraries(app1 parser)

add_executable(app2 testfoo.cpp)
target_link_libraries(app2 foo)

add_executable(app3 testall.cpp)
target_link_libraries(app3 foo parser)
