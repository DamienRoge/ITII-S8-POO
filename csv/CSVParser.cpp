/*
* CSVParser.cpp
*
*/

#include <string>
#include <fstream>
#include <iostream>
#include "CSVParser.hpp"

using namespace std;
bool CSVParser::initWithFile(string chemin_fichier) {
    // affectation d’une valeur à un attribut de la struct
    this->filepath = chemin_fichier;

    wifstream mon_fichier;
    mon_fichier.open(this->filepath);

    // Gestion de l'erreur à l'ouverture du fichier
    if(!mon_fichier.is_open()){
        cout << "Impossible d'ouvrir le fichier spécifié..." << endl;
        return false;
    }

    // HEADER & Nombre de colonnes
    this->numberOfColumns = 0;
    this->header[0]="";
    this->header[1]="";
    this->header[2]="";
    this->header[3]="";

    wchar_t le_char = NULL; // Character courant lu
    int i = 0;
    int j = 0;
    mon_fichier.get(le_char);
    while(le_char != '\n' || j == 10){
        if(le_char==','){
            i++;
            this->numberOfColumns++;
            mon_fichier.get(le_char);
            continue;
        }
        this->header[i] += le_char;
        mon_fichier.get(le_char);
        j++;
    }
    mon_fichier.close();
    return true;
}