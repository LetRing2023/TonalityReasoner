cmake_minimum_required(VERSION 3.0)
project(TonalityReasoner)

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
