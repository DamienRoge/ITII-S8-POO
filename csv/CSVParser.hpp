/*
* CSVParser.hpp
*
* Note: Lecteur de fichier CSV
*/

#include <string>


struct CSVParser {
    /** -- Attributs -- **/
    std::string filepath;
    int numberOfColumns;
    int numberOfRows;
    std::string header[4];

    /** -- Fonctions -- **/
    bool initWithFile(std::string path);
};