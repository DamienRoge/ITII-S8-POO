/**
 * AUTEUR : Damien ROGÉ
 * DATE : 19 JANVIER 2019
 **/

#include "WordCounter.hpp"

#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"

using namespace std;

TEST_CASE( "WordCounter", "[]" ) {

    SECTION( "Constructeur WordCounter() TEST" ) {
        string monString("Une fois, sur le minuit lugubre, pendant que je méditais, faible et fatigué, sur maint précieux et curieux volume d’une doctrine oubliée.");
        WordCounter monWordCounter(monString);
        WordCounter monDeuxiemeWordCounter("Pendant que je donnais de la tête, presque assoupi, soudain il se fit un tapotement, comme de quelqu’un frappant doucement, frappant à la porte de ma chambre.");

        REQUIRE(monWordCounter.getLineToRead() == monString);
        REQUIRE(monWordCounter.getLineToRead() == "Une fois, sur le minuit lugubre, pendant que je méditais, faible et fatigué, sur maint précieux et curieux volume d’une doctrine oubliée.");

        REQUIRE(monDeuxiemeWordCounter.getLineToRead() == "Pendant que je donnais de la tête, presque assoupi, soudain il se fit un tapotement, comme de quelqu’un frappant doucement, frappant à la porte de ma chambre.");


    }

    SECTION( "Constructeur count() TEST" ) {
        WordCounter monWordCounter("Pendant que je donnais de la tête, presque assoupi, soudain il se fit un tapotement");
        REQUIRE(monWordCounter.count() == 15);

        monWordCounter.setLineToRead("");
        REQUIRE(monWordCounter.count() == 0);

        monWordCounter.setLineToRead("&é\"'(§(§'\"& !--_§(");
        REQUIRE(monWordCounter.count() == 0);

        monWordCounter.setLineToRead("&é\"'(§(§'Bonjour\"& !--_§(");
        REQUIRE(monWordCounter.count() == 1);

        monWordCounter.setLineToRead("http://ceci.nest.pas.un.mot.com");
        REQUIRE(monWordCounter.count() == 0);

        monWordCounter.setLineToRead("L'adresse suivant n'est pas un mot http://google.com");
        REQUIRE(monWordCounter.count() == 8);

        monWordCounter.setLineToRead("La suite de nombre suivante n'est pas un mot 2345345 2345 2345455 4 4 55454 5 4");
        REQUIRE(monWordCounter.count() == 10);

        monWordCounter.setLineToRead("1234 5432, 23456 ;./.2354354 345 3 4");
        REQUIRE(monWordCounter.count() == 0);

        
    }

}