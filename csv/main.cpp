/**
 * AUTEUR : Damien ROGÉ
 * DATE : 19 JANVIER 2019
 **/

#include <iostream>
#include <string>
#include <stdio.h>
#include "CSVParser.hpp"
using namespace std;


int main(int argc, char **argv){

    CSVParser monCSVParser;
    if(monCSVParser.initWithFile("./sondage.csv")){
        cout << "OKI DOKI" << endl;
    }
    else
    {
        cout << "RESTE DANS TA PISSE" << endl;
        return -1;
    }

    return 0;
}