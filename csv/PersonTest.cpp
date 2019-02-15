/**
 * AUTEUR : Damien ROGÉ
 **/

#include <iostream>
#include <string>
#include <stdio.h>
#include "Person.hpp"

#include "catch.hpp"

using namespace std;


TEST_CASE( "Valid Phone Number", "[Person]" ) {
    Person toto;
    char tel[10] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9'};
    toto.setNumeroTelephone(tel);
    
    REQUIRE( toto.hasValidPhoneNumber() == true );
    strncpy(tel, "BONJOUR", sizeof(char)*10);
    toto.setNumeroTelephone(tel);
    REQUIRE( toto.hasValidPhoneNumber() == false );

    toto.setPrenom("Albert");
    toto.setNom("Dupont");
    REQUIRE( toto.hasValidNames() == true );

    toto.setPrenom("");
    toto.setNom("Dupont");
    REQUIRE( toto.hasValidNames() == true );

    toto.setPrenom("");
    toto.setNom("");
    REQUIRE( toto.hasValidNames() == false );

    toto.setPrenom("xX_Dem0n-Kill3r_Xx");
    toto.setNom("Dupont");
    REQUIRE( toto.hasValidNames() == false );



}