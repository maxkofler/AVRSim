cmake_minimum_required(VERSION 3.5)
project(AVRSim)

add_subdirectory(Log)

set(CMAKE_INCLUDE_CURRENT_DIR ON)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(QT NAMES Qt6 Qt5 COMPONENTS Widgets REQUIRED)
find_package(Qt${QT_VERSION_MAJOR} COMPONENTS Widgets REQUIRED)

include_directories(Log/include)

file (GLOB_RECURSE CXX_FILES "src/**.cpp")

add_executable(${PROJECT_NAME} ${CXX_FILES})
target_link_libraries(${PROJECT_NAME} log Qt${QT_VERSION_MAJOR}::Widgets)