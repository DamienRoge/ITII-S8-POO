#include <string>
#include <stdio.h>
using namespace std;

class WordCounter{
public:
    WordCounter(const string); // Constructor
    
    unsigned int count();
    string getLineToRead(); // For test purpose
    void setLineToRead(const string); // For test purpose

private:
    string _lineToRead;
};