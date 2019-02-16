/*
* Fraction.cpp
*
*/

#include <string>
#include <fstream>
#include <iostream>
#include "Fraction.hpp"

using namespace std;

    /** -- Getters -- **/
    int Fraction::getNumerateur(){
        return this->numerateur;
    }
    int Fraction::getDenominateur(){
        return this->denominateur;
    }

    /** -- Setters -- **/
    void Fraction::setNumerateur(int nouveauNumerateur){
        this->numerateur = nouveauNumerateur;
    }
    void Fraction::setDenominateur(int nouveauDenominateur){
        this->denominateur = nouveauDenominateur;
    }

    /** -- Fonctions -- **/
    string Fraction::display(){
        string toDisplay("");
        toDisplay + to_string(this->numerateur) + "/" + to_string(this->denominateur);
        return toDisplay;
    }

    /** -- Operateurs -- */

    void Fraction::operator+(int leEntier){
        
    }
    void Fraction::operator+(Fraction laFraction){

    }
    bool Fraction::operator<(Fraction laFraction){

    }
    bool Fraction::operator>(Fraction laFraction){

    }
