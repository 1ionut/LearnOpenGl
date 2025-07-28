# CMakeList.txt : CMake project for Application, include source and define
# project specific logic here.
cmake_minimum_required(VERSION 3.12)

# Collect all .cpp files from src/
file(GLOB_RECURSE Application_SRC "src/*.cpp")

# Create a static library from the collected source files
add_executable(Application ${Application_SRC})

# Set C++ standard
set_property(TARGET Application PROPERTY CXX_STANDARD 20)

# Include directories so headers are found
target_include_directories(Application PRIVATE "include")

# 🔗 Link Application with Engine
target_link_libraries(Application PRIVATE Engine)

# TODO: Add tests and install targets if needed.
