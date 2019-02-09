# Variables
CXXFLAGS = -Wall -g -O0 -std=c++11
SRC = WordCounter.cpp main.cpp
SRC_TEST = WordCounter.cpp  WordCounterTest.cpp
INC = WordCounter.hpp
OBJ = $(SRC:.cpp=.o)

default : all


main :
	g++ -o smart-wc $(SRC) -I $(CXXFLAGS)

test :
	g++ -o test-smart-wc $(SRC_TEST) $(CXXFLAGS)

clean :
	rm -f *.o
	rm -f main
	rm -f test-smart-wc

cleaner :
	rm -f *.o
	rm -f main
	rm -f test-smart-wc

run : all
	./smart-wc

run-test : test
	./test-smart-wc

all : main test
