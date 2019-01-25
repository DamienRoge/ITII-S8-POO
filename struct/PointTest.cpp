/**
 * AUTEUR : Damien ROGÉ
 * DATE : 19 JANVIER 2019
 **/

#include <iostream>
#include <string>
#include <stdio.h>
#include "point.hpp"

#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"

using namespace std;


TEST_CASE( "Point basics", "[point]" ) {

    Point monPoint;
    Point monPoint2;
    Point monPoint3;


    SECTION( "InitPoint() TEST" ) {
        monPoint = InitPoint();
        REQUIRE( monPoint.x == 0 );
        REQUIRE( monPoint.y == 0 );
        monPoint = InitPoint(2);
        REQUIRE( monPoint.x == 2 );
        REQUIRE( monPoint.y == 0 );
        monPoint = InitPoint(1,2);
        REQUIRE( monPoint.x == 1 );
        REQUIRE( monPoint.y == 2 );
    }

    SECTION( "Display() TEST" ) {
        Point monPoint = InitPoint();
        REQUIRE( Display(monPoint) == "(X:0, Y:0)");
        monPoint = InitPoint(3);
        REQUIRE( Display(monPoint) == "(X:3, Y:0)");
        monPoint = InitPoint(4,7);
        REQUIRE( Display(monPoint) == "(X:4, Y:7)");
    }

    SECTION( "operator+ TEST" ) {
        monPoint = InitPoint(4,7);
        monPoint2 = InitPoint(5,3);
        monPoint3 = monPoint + monPoint2;

        REQUIRE( monPoint3.x == 9);
        REQUIRE( monPoint3.y == 10);
    }

    SECTION( "postfix operator++ TEST" ) {
        monPoint = InitPoint(4,7);
        monPoint2 = InitPoint(5,3);

        monPoint = monPoint++;
        REQUIRE( monPoint.x == 5);
        REQUIRE( monPoint.y == 7);
        monPoint2 = monPoint2++;
        REQUIRE( monPoint2.x == 6);
        REQUIRE( monPoint2.y == 3);
    }

        SECTION( "prefix operator++ TEST" ) {
        monPoint = InitPoint(4,7);
        monPoint2 = InitPoint(5,3);

        monPoint = ++monPoint;
        REQUIRE( monPoint.x == 4);
        REQUIRE( monPoint.y == 8);
        monPoint2 = ++monPoint2;
        REQUIRE( monPoint2.x == 5);
        REQUIRE( monPoint2.y == 4);
    }

        SECTION( "postfix operator-- TEST" ) {
        monPoint = InitPoint(4,7);
        monPoint2 = InitPoint(5,3);

        monPoint = monPoint--;
        REQUIRE( monPoint.x == 3);
        REQUIRE( monPoint.y == 7);
        monPoint2 = monPoint2--;
        REQUIRE( monPoint2.x == 4);
        REQUIRE( monPoint2.y == 3);
    }

        SECTION( "prefix operator-- TEST" ) {
        monPoint = InitPoint(4,7);
        monPoint2 = InitPoint(5,3);

        monPoint = --monPoint;
        REQUIRE( monPoint.x == 4);
        REQUIRE( monPoint.y == 6);
        monPoint2 = --monPoint2;
        REQUIRE( monPoint2.x == 5);
        REQUIRE( monPoint2.y == 2);
    }



}