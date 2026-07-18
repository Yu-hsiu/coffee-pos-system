# v0-procedural 用的簡易 Makefile
CXX = g++
CXXFLAGS = -std=c++17 -Wall -Wextra -I include
TARGET = coffee_pos
SRC = src/main.cpp

$(TARGET): $(SRC)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(SRC)

clean:
	rm -f $(TARGET)

.PHONY: clean
