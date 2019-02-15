/*
* Person.cpp
*
*/

#include <string>
#include <fstream>
#include <iostream>
#include "Person.hpp"

using namespace std;

    /** -- Getters -- **/
    string Person::getPrenom(){
        return this->prenom;
    }

    string Person::getNom(){
        return this->nom;
    }

    int Person::getNbReponsesPositives(){
        return this->nbReponsesPositives;
    }

    int Person::getNbQuestions(){
        return this->nbQuestions;
    }

    void Person::getNumeroTelephone(char numeroTelephone[10]){
        for(int i = 0 ; i < 10 ; i++)
            numeroTelephone[i] = this->numeroTelephone[i];
    }

    /** -- Setters -- **/
    void Person::setNumeroTelephone(char nouveauNumeroTelephone[10]){
        strncpy(this->numeroTelephone, nouveauNumeroTelephone, sizeof(char)*10);
    }

    void Person::setPrenom(string nouveauPrenom){
        this->prenom.assign(nouveauPrenom);
    }

    void Person::setNom(string nouveauNom){
        this->nom.assign(nouveauNom);
    }
    
    /** -- Fonctions -- **/
    bool Person::hasValidPhoneNumber(){
        if(this->numeroTelephone[0] != '0'){
            return false;
        }

        for(int i = 0 ; i < 10 ; i++)
            if(!isdigit(this->numeroTelephone[i])){
                return false;
            }

        return true;
    }

    bool Person::hasValidNames(){

        if(this->prenom.length() == 0 && this->nom.length() == 0) 
            return false;

        
        for(int i = 0; i < this->prenom.length(); i++)
        {
            if(!isalpha(this->prenom.at(i))){ // Si char pas alpha
                return false;
            }
        }

        for(int j = 0; j < this->nom.length(); j++)
        {
            if(!isalpha(this->nom.at(j))){ // Si char pas alpha
                return false;
            }
        }
        return true;
    
    }
