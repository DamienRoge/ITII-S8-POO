/**
 * AUTEUR : Damien ROGÉ
 * DATE : 19 JANVIER 2019
 **/

#include <iostream>
#include <string>
#include <stdio.h>
#include "CSVParser.hpp"

#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"

using namespace std;


TEST_CASE( "CSVParser", "[]" ) {
    SECTION("CSVParser"){

        CSVParser monCSVParser;

        REQUIRE(monCSVParser.initWithFile("./sondage.csv"));

        REQUIRE(monCSVParser.getFilepath() == "./sondage.csv");
        REQUIRE(monCSVParser.getNumberOfColumns() == 4);
        REQUIRE(monCSVParser.getNumberofRows() == 20);
                
        string header[4];
        monCSVParser.getHeader(header);
        REQUIRE(header[0] == "Prénoms");
        REQUIRE(header[1] == "Numéros de téléphone");
        REQUIRE(header[2] == "Réponses");
        REQUIRE(header[3] == "Noms");
                 
    }

}