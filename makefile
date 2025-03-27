# Compiler and flags
CXX = g++
CXXFLAGS = -Wall -Wextra -std=c++17 -g

# Directories
BIN_DIR = bin

# Source files
SRC_V1 = src/v1.cpp
SRC_V2 = src/v2.cpp

# Binaries
BIN_V1 = $(BIN_DIR)/v1
BIN_V2 = $(BIN_DIR)/v2

# Targets
all: v1 v2

# Build and run v1
v1: $(BIN_V1)
	@echo "Running v1..."
	@./$(BIN_V1)

# Build and run v2
v2: $(BIN_V2)
	@echo "Running v2..."
	@./$(BIN_V2)

# Compile v1.cpp
$(BIN_V1): $(SRC_V1)
	mkdir -p $(BIN_DIR)
	$(CXX) $(CXXFLAGS) $(SRC_V1) -o $(BIN_V1)

# Compile v2.cpp
$(BIN_V2): $(SRC_V2)
	mkdir -p $(BIN_DIR)
	$(CXX) $(CXXFLAGS) $(SRC_V2) -o $(BIN_V2)

# Clean compiled files
clean:
	rm -rf $(BIN_DIR)
