cmake_minimum_required(VERSION 3.16)

project(sfml3-app LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# SFML build options for faster compilation
set(SFML_BUILD_AUDIO OFF CACHE BOOL "Build SFML audio module" FORCE)
set(SFML_BUILD_NETWORK OFF CACHE BOOL "Build SFML network module" FORCE)
set(SFML_BUILD_EXAMPLES OFF CACHE BOOL "Build SFML examples" FORCE)
set(SFML_BUILD_DOC OFF CACHE BOOL "Build SFML documentation" FORCE)
# Precompiled headers are not supported by SFML on macOS, so only enable them elsewhere
if(APPLE)
    set(SFML_ENABLE_PCH OFF CACHE BOOL "Enable precompiled headers" FORCE)
else()
    set(SFML_ENABLE_PCH ON CACHE BOOL "Enable precompiled headers" FORCE)
endif()
set(CMAKE_BUILD_TYPE "Release" CACHE STRING "Build type" FORCE)

# Build SFML statically so the app can run straight from the build dir without rpath setup
set(BUILD_SHARED_LIBS OFF CACHE BOOL "Build shared libraries" FORCE)

# Pick the SFML version from the include used in src/main.cpp -- this is the single
# switch point. Writing `#include <SFML3/...>` builds SFML 3 (external/SFML),
# `#include <SFML2/...>` builds SFML 2 (external/SFML2). No run.sh changes needed.
# Each submodule's include dir carries a matching SFML2/ or SFML3/ alias symlink.
file(READ ${CMAKE_CURRENT_SOURCE_DIR}/src/main.cpp _main_src)
if(_main_src MATCHES "<SFML3/")
    set(SFML_SUBDIR SFML)    # SFML 3 submodule
    set(SFML_MAJOR 3)
else()
    set(SFML_SUBDIR SFML2)   # SFML 2 submodule
    set(SFML_MAJOR 2)
endif()
message(STATUS "Building against SFML ${SFML_MAJOR} (external/${SFML_SUBDIR})")

add_subdirectory(external/${SFML_SUBDIR})

add_executable(sfml3-app src/main.cpp)

# Expose the selected submodule's include dir so its `SFML2/` or `SFML3/` alias resolves
target_include_directories(sfml3-app
    PRIVATE
        ${CMAKE_CURRENT_SOURCE_DIR}/external/${SFML_SUBDIR}/include
)

target_link_libraries(sfml3-app
    PRIVATE
        sfml-graphics
        sfml-window
        sfml-system
)
