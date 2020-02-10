AUX_SOURCE_DIRECTORY(./src LOG_SOURCES)
add_library(foo ${LOG_SOURCES})
target_include_directories(foo PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/inc)
