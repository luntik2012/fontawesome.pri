cmake_minimum_required(VERSION 3.13.4)

project(fontawesome LANGUAGES CXX)

set(CMAKE_INCLUDE_CURRENT_DIR ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(Qt5 COMPONENTS Core Qml)
find_package(Qt5QuickCompiler)

qtquick_compiler_add_resources(RESOURCES fontawesome.qrc)

add_library(${PROJECT_NAME} STATIC fontawesome.h ${RESOURCES})
#add_library(${PROJECT_NAME} SHARED fontawesome.h ${RESOURCES})

target_include_directories(${PROJECT_NAME} PUBLIC ${PROJECT_SOURCE_DIR})
qt5_use_modules(${PROJECT_NAME} Core Qml)
target_link_libraries(${PROJECT_NAME} Qt5::Core Qt5::Qml)

#list(APPEND QML_DIRS ${PROJECT_SOURCE_DIR} ${PROJECT_SOURCE_DIR})
#list(APPEND QML_DIRS ${PROJECT_SOURCE_DIR} ${PROJECT_SOURCE_DIR}/FontAwesome)
#set(QML_IMPORT_PATH "${QML_DIRS}" CACHE STRING "Qt Creator 4.8.1 extra qml import paths")
