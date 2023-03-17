cmake_minimum_required(VERSION 3.10)

project(TonalityReasoner)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

set(SOURCES
  main.cpp
  MusicalNote.h
  MusicalNote.cpp
  TonalityReasoner.h
  TonalityReasoner.cpp
)

add_executable(t-reasoner ${SOURCES})

# Debug and Release configurations
set(CMAKE_BUILD_TYPE Debug CACHE STRING "Choose the type of build." FORCE)
set_property(CACHE CMAKE_BUILD_TYPE PROPERTY STRINGS "Debug" "Release")

# Set compiler flags
set(CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS_DEBUG} -g")
set(CMAKE_CXX_FLAGS_RELEASE "${CMAKE_CXX_FLAGS_RELEASE} -O2 -march=native -flto")
