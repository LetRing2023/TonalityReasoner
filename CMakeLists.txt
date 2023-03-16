cmake_minimum_required(VERSION 3.0)
project(TonalityReasoner)

set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Use C++ 11
set(CMAKE_CXX_STANDARD 11)

# Add source files
set(SOURCES
    MusicalNote.h
    MusicalNote.cpp
    TonalityReasoner.cpp
    TonalityReasoner.h
    main.cpp
)

# Create executable
add_executable(t-reasoner ${SOURCES})
