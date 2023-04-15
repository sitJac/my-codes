# mkefile for Sudoku

CC=g++
CFLAGS=-std=c++11
RM=rm -f

SRCDIR=src
SOURCES=$(wildcard $(SRCDIR)/*.cpp)
OBJECTS=$(SOURCES:.cpp=.o)

TARGET=sudoku

all: $(TARGET)

$(TARGET): $(OBJECTS)
	 $(CC) $(OBJECTS) $(CFLAGS) -o $(TARGET)

%.o: %.cpp
	 $(CC) $(CFLAGS) -c $< -o $@

clean:
	 $(RM) $(TARGET) $(OBJECTS)

