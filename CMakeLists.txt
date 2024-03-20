cmake_minimum_required(VERSION 3.11)
project(main)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -O3")

file(GLOB SOURCES src/*.c)
file(GLOB HEADERS src/*.h)
add_executable(${PROJECT_NAME} ${SOURCES} ${HEADERS})

if (APPLE)
    target_link_libraries(${PROJECT_NAME} "-framework IOKit")
    target_link_libraries(${PROJECT_NAME} "-framework Cocoa")
    target_link_libraries(${PROJECT_NAME} "-framework OpenGL")
endif()
