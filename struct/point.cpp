/**
 * AUTEUR : Damien ROGÉ
 * DATE : 19 JANVIER 2019
 **/

#include <iostream>
#include <string>
#include <stdio.h>
#include "point.hpp"



using namespace std;


Point InitPoint(int le_x, int le_y){
    Point mon_point;
    mon_point.x = le_x;
    mon_point.y = le_y;
    return mon_point;
}

string Display(Point le_point){
    string mon_string;
    mon_string = "(X:" + std::to_string(le_point.x) + ", Y:" + std::to_string(le_point.y) + ")";
    return mon_string;
}

Point operator+(Point left, Point right){
    Point resultat;
    resultat.x = left.x + right.x;
    resultat.y = left.y + right.y;

    return resultat;
}


// OPERATIONS D'INCREMENTATION
// /!\ Commentaires :
//      Contrairement a l'operation maValeur++ où maValeur est un entier (int)
//      les operations implémentées plus bas ne modifient pas directement les 
//      structures Point passées en paramètre.
//      On doit faire :
//      monPoint = monPoint++;
//      
//      Le code suivant n'a pas le comportement attendu :
//      monPoint = InitPoint(0,0);
//      monPoint++;
//      cout << Display(monPoint); // (X:0,Y:O) et pas (X:1,Y:O)


// Postfix
Point operator++(Point le_point, int val){
    le_point.x++;
    return le_point;
}

// Prefix
Point operator++(Point le_point){
    le_point.y++;
    return le_point;
}

// Postfix
Point operator--(Point le_point, int val){
    le_point.x--;
    return le_point;
}

// Prefix
Point operator--(Point le_point){
    le_point.y--;
    return le_point;
}

/*
Point operator++(Point le_point, int valeur);

Point operator--(Point le_point);
Point operator--(Point le_point, int valeur);
*/