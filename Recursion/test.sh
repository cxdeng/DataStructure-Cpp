#!/bin/bash

# Display the current date and time
date
echo "Start Testing..."

# Store the initial directory
INITIAL_DIR=$(pwd)

# Set the build directory variable
BUILD_DIR="build"

# Change to the build directory and run tests
if cd "$BUILD_DIR"; then
    echo "Changed to directory $BUILD_DIR"
else
    echo "Failed to change to directory $BUILD_DIR"
    exit 1
fi

# Run ctest
if ctest; then
    echo "Tests completed successfully"
else
    echo "Tests failed"
    cd "$INITIAL_DIR"
    exit 1
fi

# Return to the initial directory
if cd "$INITIAL_DIR"; then
    echo "Returned to initial directory $INITIAL_DIR"
else
    echo "Failed to return to initial directory $INITIAL_DIR"
    exit 1
fi

echo "End of Testing"