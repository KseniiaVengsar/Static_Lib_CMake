cmake_minimum_required(VERSION 3.22.0)
project(StatLib)
add_library(LibLibS STATIC StaticProjectTest/Header.h StaticProjectTest/Source.cpp)
# Устанавливаем путь для поиска заголовочных файлов
target_include_directories(LibLibS PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/StaticProjectTest)
add_executable(StLibE
    ConAppProject/ConAppProject.cpp)
target_link_libraries(StLibE LibLibS)