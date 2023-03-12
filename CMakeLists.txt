cmake_minimum_required(VERSION 3.22)
project(template)

set(CMAKE_CXX_STANDARD 11)

add_executable(test main.cpp src/Service/DisplayServiceInterface.h src/Service/FileService.cpp src/Service/FileService.h src/App.cpp src/App.h src/Service/ConsoleDisplayService.cpp src/Service/ConsoleDisplayService.h)
