# CMakeList.txt : CMake project for Engine, include source and define
# project specific logic here.
cmake_minimum_required(VERSION 3.12)

# Collect all .cpp files from src/
file(GLOB_RECURSE Engine_SRC "src/*.cpp")

# Add glad to source
list(APPEND Engine_SRC "vendor/glad/src/glad.c")

# Create a static library from the collected source files
add_library(Engine STATIC ${Engine_SRC})

# Link glfw
add_subdirectory(vendor/glfw)
target_link_libraries(Engine PRIVATE glfw)

# Include directories
target_include_directories(Engine PUBLIC
    "include"
    "vendor/glad/include"
    "vendor/glfw/include"
)

# Set C++ standard
set_property(TARGET Engine PROPERTY CXX_STANDARD 20)

# TODO: Add tests and install targets if needed.
