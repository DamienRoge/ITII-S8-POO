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
    //Affectation d’une valeur à un attribut de la struct
    this->filepath = chemin_fichier;

    wifstream mon_fichier;
    mon_fichier.open(this->filepath);

    // Gestion de l'erreur à l'ouverture du fichier
    if(!mon_fichier.is_open()){
        cout << "Impossible d'ouvrir le fichier spécifié..." << endl;
        return false;
    }

    // Header & Nombre de colonnes
    this->numberOfColumns = 0;
    this->header[0]="";
    this->header[1]="";
    this->header[2]="";
    this->header[3]="";

    wchar_t le_char = NULL; // Character courant lu
    int i = 0;
    mon_fichier.get(le_char);

    //Parcours de la permière ligne caractère par caractère
    while(le_char != '\n'){
        if(le_char==','){ //Si on tombe sur une virgule
            i++; //Incrementation de l'index du header en cours de parcours
            this->numberOfColumns++; //Incrementation du nombre de colonnes
            //Passage direct au caractère suivant sans ajouter le caractère (virgule) au header
            mon_fichier.get(le_char);
            continue;
        }
        this->header[i] += le_char; //Ajout du caractère au header
        mon_fichier.get(le_char); //Passage au caractère suivant
    }
    this->numberOfColumns++; //Comptage du dernier header


    // Nombre de lignes
    string rof;
    wchar_t line[256]; //Requis par getline() mais non-utilisé
    this->numberOfRows = 0;

    //On lit les lignes restantes du fichier
    //Le header ayant déjà été lu on ne compte que les lignes de contenu
    while(mon_fichier.getline(line, 256)){
        this->numberOfRows++;
    }
        
    mon_fichier.close();
    return true;
}