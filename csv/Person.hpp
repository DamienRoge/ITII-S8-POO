/*
* CSVParser.hpp
*
* Note: BOM
*/

#include <string>
using namespace std;

struct Person {
    private:
    /** -- Attributs -- **/
    string prenom;
    string nom;
    int nbReponsesPositives;
    int nbQuestions;
    char numeroTelephone[10];

    public:
    /** -- Getters -- **/
    string getPrenom();
    string getNom();
    int getNbReponsesPositives();
    int getNbQuestions();
    void getNumeroTelephone(char[10]); 
    /** -- Setters -- **/
    void setNumeroTelephone(char[10]); 
    void setPrenom(string);
    void setNom(string);
    
    /** -- Fonctions -- **/
    bool hasValidPhoneNumber();
    bool hasValidNames();
};