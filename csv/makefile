# Variables
CXXFLAGS = -Wall -g -O0 -std=c++11
SRC = CSVParser.cpp main.cpp Person.cpp Fraction.cpp
SRC_TEST = CSVParser.cpp  CSVParserTest.cpp Person.cpp PersonTest.cpp Fraction.cpp FractionTest.cpp
INC = CSVParser.hpp Person.hpp Fraction.hpp
OBJ = $(SRC:.cpp=.o)

default : all

all :
	g++ -o main $(SRC) -I $(CXXFLAGS)

test :
	g++ -o test-csvparser $(SRC_TEST) $(CXXFLAGS)

clean :
	rm -f *.o
	rm -f main
	rm -f test-csvparser

cleaner :
	rm -f *.o
	rm -f main
	rm -f test-csvparser

run : all
	./main

run-test : test
	./test-csvparser