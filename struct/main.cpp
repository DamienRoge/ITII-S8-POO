/**
 * AUTEUR : Damien ROGÉ
 * DATE : 19 JANVIER 2019
 **/

#include <iostream>
#include <string>
#include <stdio.h>
#include "point.hpp"

using namespace std;


int main(){
    cout << "Hello World!" << endl;

    cout << "Initialisation d'un point x: 2, y: 7" << endl;
    Point mon_point = InitPoint(2, 7);
    cout << "Display de ce point :" << endl;

    cout << Display(mon_point) << endl;

    cout << "Initialisation d'un point x: 2, y: 3" << endl;
    Point point_addition_1 = InitPoint(2,3);
    cout << "Initialisation d'un point x: 7, y: 1" << endl;
    Point point_addition_2 = InitPoint(7,1);

    cout << "Addition de (X: 2, Y: 3) et (X: 7, Y: 1)" << endl;
    Point point_resultat = point_addition_1 + point_addition_2;
    cout << Display(point_resultat) << endl;

    return 0;
}