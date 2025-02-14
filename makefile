CXX = g++
CXXFLAGS = -Wall -Wextra -O2

TARGET = main
SOURCES = main.cpp

OBJECTS = $(SOURCES:.cpp=.o)

DUSE_DOUBLE ?=

ifeq ($(DUSE_DOUBLE), 1)
	CXXFLAGS += -DUSE_DOUBLE
endif

all: $(TARGET)

$(TARGET): $(OBJECTS)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(OBJECTS)

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -rf $(TARGET) $(OBJECTS)

