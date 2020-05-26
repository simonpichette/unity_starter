file(GLOB SOURCES ./*.c)

add_executable(simulateur ${SOURCES})
target_include_directories(simulateur PUBLIC ${CMAKE_CURRENT_LIST_DIR})
