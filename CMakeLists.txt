cmake_minimum_required(VERSION 3.21)
project(Visualized VERSION 1.0.0 DESCRIPTION "")

set(CMAKE_CXX_STANDARD 17)

find_package(glfw3 REQUIRED)
include_directories(${OPENGL_INCLUDE_DIRS})

file(GLOB_RECURSE source_files ./src/*)
add_library(${PROJECT_NAME} ${source_files})

target_link_libraries(${PROJECT_NAME} glfw)

target_include_directories(${PROJECT_NAME} PUBLIC
        $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
        $<INSTALL_INTERFACE:include>
        PRIVATE src)

set_target_properties(${PROJECT_NAME} PROPERTIES
        VERSION ${PROJECT_VERSION}
        SOVERSION 1)

install(TARGETS ${PROJECT_NAME} EXPORT VisualizedConfig
        ARCHIVE  DESTINATION ${CMAKE_INSTALL_LIBDIR}
        LIBRARY  DESTINATION ${CMAKE_INSTALL_LIBDIR}
        RUNTIME  DESTINATION ${CMAKE_INSTALL_BINDIR})
install(DIRECTORY include/ DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/${PROJECT_NAME})

install(EXPORT VisualizedConfig DESTINATION share/MCpp/cmake)

export(TARGETS ${PROJECT_NAME} FILE VisualizedConfig.cmake)