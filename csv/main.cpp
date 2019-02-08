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

    cout << "headers:" << endl << monCSVParser.header[0] << endl;
    cout << monCSVParser.header[1] << endl;
    cout << monCSVParser.header[2] << endl;
    cout << monCSVParser.header[3] << endl;
    cout << "nombre de colonnes: " << monCSVParser.numberOfColumns << endl;
    cout << "nombre de lignes: " << monCSVParser.numberOfRows << endl;

    return 0;
}