cmake_minimum_required(VERSION 3.16)
project(CMake_TestProject LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

add_executable(myprog
  src/main.cpp
)

target_include_directories(myprog PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/include)

# Optional: If using std::thread or future
find_package(Threads REQUIRED)
target_link_libraries(myprog PRIVATE Threads::Threads)
