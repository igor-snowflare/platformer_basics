cmake_minimum_required(VERSION 3.16)
project(PlatformerTest LANGUAGES CXX)

# Use modern C++
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Gather main.cpp explicitly
set(MAIN_FILE ${CMAKE_SOURCE_DIR}/main.cpp)

# Add the src folder
add_subdirectory(src)

# --- SDL3 integration ---
find_package(SDL3 REQUIRED)

# Define the executable here instead of in src/CMakeLists
add_executable(PlatformerTest ${MAIN_FILE} ${SRC_FILES})