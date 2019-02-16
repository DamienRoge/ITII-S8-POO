# Variables
CXXFLAGS = -mmacosx-version-min=10.7 -Wall -g -O0 -std=c++11 `wx-config --libs` `wx-config --cxxflags` -stdlib=libc++ 
SRC = ConvertorFrame.cpp ConvertorApp.cpp
SRC_TEST = ConvertorFrame.cpp  ConvertorApp.cpp 
INC = ConvertorFrame.hpp ConvertorApp.hpp
OBJ = $(SRC:.cpp=.o)

default : all

all :
	g++ -o app $(SRC) -I $(CXXFLAGS)

test :
	g++ -o test-app $(SRC_TEST) $(CXXFLAGS)

clean :
	rm -f *.o
	rm -f app
	rm -f test-app

cleaner :
	rm -f *.o
	rm -f main
	rm -f test-app

run : all
	./main

run-test : test
	./test-csvparser