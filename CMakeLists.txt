cmake_minimum_required(VERSION 3.17)
set(CMAKE_CXX_STANDARD 20)

include_directories(/opt/homebrew/Cellar/fmt/7.1.3/include)
link_directories(/opt/homebrew/Cellar/fmt/7.1.3/lib)

project(threadSafeSTL)


add_executable(threadSafeSTL main.cpp)
