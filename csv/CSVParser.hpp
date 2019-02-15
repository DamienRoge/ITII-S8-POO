/*
* CSVParser.hpp
*
* Note: Lecteur de fichier CSV
*/

#include <string>


struct CSVParser {
    private:
    /** -- Attributs -- **/
    std::string filepath;
    int numberOfColumns;
    int numberOfRows;
    std::string header[4];
    
    public:
    /** -- Getters -- **/
    std::string getFilepath();
    int getNumberOfColumns();
    int getNumberofRows();
    std::string *getHeader(std::string*);

    /** -- Fonctions -- **/
    bool initWithFile(std::string path);
};