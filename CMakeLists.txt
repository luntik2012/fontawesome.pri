cmake_minimum_required(VERSION 3.10.2)

project(fontawesome LANGUAGES CXX)

set(CMAKE_INCLUDE_CURRENT_DIR ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(Qt5 COMPONENTS Core Qml)
find_package(Qt5QuickCompiler)

add_library(${PROJECT_NAME} STATIC fontawesome.h fontawesome.qrc)

target_include_directories(${PROJECT_NAME} PUBLIC ${PROJECT_SOURCE_DIR})
target_link_libraries(${PROJECT_NAME} Qt5::Core Qt5::Qml)
