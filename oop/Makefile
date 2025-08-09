CXX = g++
CXXFLAGS = -Wall -std=c++11
BUILD_DIR = build
TARGET = $(BUILD_DIR)/program

SRCS = main.cpp Person.cpp Employee.cpp
OBJS = $(SRCS:%.cpp=$(BUILD_DIR)/%.o)

all: $(BUILD_DIR) $(TARGET)

$(BUILD_DIR):
	mkdir -p $(BUILD_DIR)

$(TARGET): $(OBJS)
	$(CXX) $(OBJS) -o $(TARGET)

$(BUILD_DIR)/%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -rf $(BUILD_DIR)

.PHONY: clean all
