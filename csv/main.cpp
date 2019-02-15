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

    string *leHeader = monCSVParser.getHeader();

    
    cout << "headers:" << endl << leHeader[0] << endl;
    cout << leHeader[1] << endl;
    cout << leHeader[2] << endl;
    cout << leHeader[3] << endl;
    cout << "nombre de colonnes: " << monCSVParser.getNumberOfColumns() << endl;
    cout << "nombre de lignes: " << monCSVParser.getNumberofRows() << endl;
    
    free(leHeader);
    return 0;
}