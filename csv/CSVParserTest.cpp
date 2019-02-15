/**
 * AUTEUR : Damien ROGÉ
 * DATE : 19 JANVIER 2019
 **/

#include "CSVParser.hpp"

#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"

using namespace std;


TEST_CASE( "CSVParser", "[]" ) {
    SECTION("CSVParser"){
        CSVParser monCSVParser;
        monCSVParser.initWithFile("./sondage.csv");

        REQUIRE(monCSVParser.getFilepath() == "./sondage.csv");
        REQUIRE(monCSVParser.getNumberOfColumns() == 4);
        REQUIRE(monCSVParser.getNumberOfColumns() == 20);
        string *header = monCSVParser.getHeader();
        REQUIRE(header[0] == "Prénoms");
        REQUIRE(header[1] == "Numéros de téléphone");
        REQUIRE(header[2] == "Réponses");
        REQUIRE(header[3] == "Noms");


    }

}