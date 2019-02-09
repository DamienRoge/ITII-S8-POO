/**
 * AUTEUR : Damien ROGÉ
 * DATE : 09 FEVRIER 2019
 **/

#include <iostream>
#include <string>
#include <stdio.h>
#include "WordCounter.hpp"
using namespace std;

WordCounter::WordCounter(string line){
    this->_lineToRead = line;
}

string WordCounter::getLineToRead(){
    return this->_lineToRead;
}

void WordCounter::setLineToRead(string line){
    this->_lineToRead = line;
}

unsigned int WordCounter::count(){
    int word_counter = 0; // Compteur retourné à la fin
    setlocale(LC_ALL, "fr_FR.UTF-8" ); // Permet de gerer les caractères alpha propres au français
    bool isInWord = false; // Necessaire pour les cas ou plusieurs caractère non-alpha se suivent
    
    for(int i = 0 ; i < this->_lineToRead.length(); i++){
        if(isalpha(this->_lineToRead.at(i))){ // Si le caractère est alpha

            /* gestion des URL */
            if(this->_lineToRead.at(i) == 'h'){ // Si on tombe sur un h
                //cout << "/!\\ DEBUG /!\\ - count() CAS DE H : " << endl;
                //cout << "caractères suivants : " << this->_lineToRead.at(i+1) << " " << this->_lineToRead.at(i+2) << " " << this->_lineToRead.at(i+3) << " " << this->_lineToRead.at(i+4) << endl;


                if( // On verifie la presence de la suite de caractère indiquant une URL
                    this->_lineToRead.at(i+1) == 't' &&
                    this->_lineToRead.at(i+2) == 't' &&
                    this->_lineToRead.at(i+3) == 'p' &&
                    this->_lineToRead.at(i+4) == ':' &&
                    this->_lineToRead.at(i+5) == '/' &&
                    this->_lineToRead.at(i+6) == '/' 
                ){
                    //cout << "/!\\ DEBUG /!\\ - count() CAS DE URL ! " << endl;

                    int j = 0; // Compteur du nombre de caractère a sauter
                    while(this->_lineToRead.at(i+j) != ' ' && i+j < this->_lineToRead.length()-1){ // ON compte le nombre de caractère avant espace ou fin de la ligne
                        j++;
                    }

                    i += j; // On saute l'URL

                    continue; // On passe à la suite
                }
            }

            /* FIN gestion des URL */

            if(isInWord) 
                continue; // On a pas fini de parcourir le mot courant
            else // On arrive dans un nouveau mot
                isInWord = true;
            
        }
        else{ // Si le caractère n'est pas alpha
            if(isInWord){ // On est arrivé à la fin d'un mot
                word_counter++;
                isInWord = false;
            }
            else 
                continue; // Plusieurs caractère non-alpha se suivent...
        }
    }

    //cout << "/!\\ DEBUG /!\\ - count() return : " << word_counter << endl;
    return word_counter;
}