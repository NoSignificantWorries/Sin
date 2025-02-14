CXX = g++
CXXFLAGS = -Wall -Wextra -O2

TARGET = main
SOURCES = main.cpp

USE_DOUBLE=0
ifeq ($(USE_DOUBLE), 1)
	CXXFLAGS += -DUSE_DOUBLE
endif

all:
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(SOURCES)

