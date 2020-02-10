AUX_SOURCE_DIRECTORY(./src LOG_SOURCES)
add_library(parser ${LOG_SOURCES})
target_include_directories(parser PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/inc)
