# Variables
CXXFLAGS = -Wall -g -O0 -std=c++11
SRC = point.cpp main.cpp
SRC_TEST = point.cpp  pointTest.cpp
INC = point.hpp
OBJ = $(SRC:.cpp=.o)

default : all

all :
	g++ -o main $(SRC) -I $(CXXFLAGS)

test :
	g++ -o test-point $(SRC_TEST) $(CXXFLAGS)

clean :
	rm -f *.o
	rm -f main
	rm -f test-point

cleaner :
	rm -f *.o
	rm -f main
	rm -f test-point

run : all
	./main

run-test : test
	./test-point