#!/bin/bash

# Display the current date and time
date
echo "Start cleaning..."

# Set directory variables
BIN_DIR="bin/*"
BUILD_DIR="build/*"
LIB_DIR="lib/*"

# Function to clean a directory
clean_directory() {
    local DIR=$1
    if rm -rf $DIR; then
        echo "Successfully cleaned $DIR"
    else
        echo "Failed to clean $DIR"
        exit 1
    fi
}

# Clean the bin, build, and lib directories
clean_directory "$BIN_DIR"
clean_directory "$BUILD_DIR"
clean_directory "$LIB_DIR"

echo "Cleaning process completed successfully"
