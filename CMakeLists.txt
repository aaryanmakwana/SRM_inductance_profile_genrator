cmake_minimum_required(VERSION 3.20)
project(App)
find_package(OpenCV REQUIRED)
add_executable(App main.cpp)

target_link_libraries(App ${OpenCV_LIBS})
