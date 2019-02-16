/*
* Fraction.hpp
*
* Note: BOM
*/

#include <string>
using namespace std;

struct Fraction {
    private:
    /** -- Attributs -- **/
    int numerateur;
    int denominateur;
    
    public:
    /** -- Getters -- **/
    int getNumerateur();
    int getDenominateur();

    /** -- Setters -- **/
    void setNumerateur(int);
    void setDenominateur(int);

    /** -- Fonctions -- **/
    string display();
};