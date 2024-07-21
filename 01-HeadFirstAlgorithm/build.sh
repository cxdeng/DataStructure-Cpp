#!/bin/bash

# Display the current date and time
date
echo "Start build..."

# Store the initial directory
INITIAL_DIR=$(pwd)

# Set the build directory variable
BUILD_DIR="build"

# Change to the build directory
if cd "$BUILD_DIR"; then
    echo "Changed to directory $BUILD_DIR"
else
    echo "Failed to change to directory $BUILD_DIR"
    exit 1
fi

# Clean the build directory
if rm -rf *; then
    echo "Cleaned build directory"
else
    echo "Failed to clean build directory"
    exit 1
fi

# Run CMake configuration
if cmake ..; then
    echo "CMake configuration successful"
else
    echo "CMake configuration failed"
    exit 1
fi

# Compile the project
if make; then
    echo "Build Successfully"
else
    echo "Build failure"
    exit 1
fi

# Return to the initial directory
if cd "$INITIAL_DIR"; then
    echo "Returned to initial directory $INITIAL_DIR"
else
    echo "Failed to return to initial directory $INITIAL_DIR"
    exit 1
fi