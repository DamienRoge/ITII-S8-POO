/**
 * AUTEUR : Damien ROGÉ
 * DATE : 19 JANVIER 2019
 * TITRE : COMPTEUR DE MOT DANS UN FICHIER TEXTE UTF-8
 * DESCRIPTION : Ce programme affiche le nombre de mots utilisant les charactères français 
 *      dans un fichier passé en paramètre.
 * AUTRE : BUGS CONNUS : Il semblerait que sur certains OS la lecture des charactères 
 *      non-ASCII ne se fasse pas correctement avec wfstream, ce qui provoque la 
 *      non-reconnaissance de ces charactères dans les lettres acceptables par la 
 *      fonction 'est_lettre_francaise(..)'.
 **/

#include <iostream>
#include <string>
#include <fstream>
#include <stdio.h>

// Liste des charactères spéciaux utilisés en français pour former des mots
wchar_t lettres_speciales[] = {
    0xC0, // À
    0xE0, // à
    0xC2, // Â
    0xE2, // â
    0xC6, // Æ
    0xCA, // Ê
    0xEA, // ê
    0xC8, // È
    0xE8, // è
    0xC9, // É
    0xE9, // é
    0xCB, // Ë
    0xEB, // ë
    0xCE, // Î
    0xEE, // î
    0xCF, // Ï
    0xEF, // ï
    0xD4, // Ô
    0xF4, // ô
    0x152, // Œ
    0x153, // œ
    0xD9, // Ù
    0xF9, // ù
    0xDB, // Û
    0xFB, // û
    0xDC, // Ü
    0xFC, // ü
    0x178, // Ÿ
    0xFF, // ÿ
    0xC7, // Ç
    0xE7, // ç
};

bool est_lettre_francaise(wchar_t);

using namespace std;
int main(int argc, char **argv){

    //Gestion d'erreur : Pas de chemin vers un fichier
    if(argc < 2){
        cout << "Veuillez donner un chemin vers un fichier texte en premier argument..." << endl;
        return -1;
    }

    //Principal
    int compteur = 0; // Compteur renvoyé
    char* chemin = argv[1]; // Chemin du fichier passé en parametre

    wifstream mon_fichier;
    mon_fichier.open(chemin); // Ouverture du flux depuis le fichier

    // Gestion de l'erreur à l'ouverture du fichier
    if(!mon_fichier.is_open()){
        cout << "Impossible d'ouvrir le fichier spécifié..." << endl;
        return -1;
    }

    wchar_t le_char; // Character courant lu
    bool mot_commence = false; // Le pointeur est-il dans un mot

    while(mon_fichier.get(le_char)){ // Tant que charactère à lire
        if(est_lettre_francaise(le_char)){ // Si le charactère peut faire partie d'un mot
            // wcout << le_char << endl; // DEBUG : Affiche le char
            if(!mot_commence) // Si l'on en dehors d'un mot
                mot_commence = true; // On met à jour le boolean
        }
        else{ // Si il ne s'agit pas d'un char pouvant former un mot
            if(mot_commence){ // Si on est déjà dans un mot
                compteur++; // On est arrivé à la fin d'un mot
                //cout << "--" << endl; //DEBUG : déparation entre les mots
                mot_commence = false; // Mise à jour du boolean
            }
        }   
    }

    // Fermeture du flux
    mon_fichier.close();

    // Affichage du nombre de mots comptés
    cout << "Nombre de mots trouvés dans le texte : " << compteur << endl;
    return 0;
}

//Fonction permettant de savoir si un charactère unicode est une lettre pouvant former un mot en francais
bool est_lettre_francaise(wchar_t char_a_tester){
    
    // Chiffres
    if(char_a_tester >= 0x30 && char_a_tester <= 0x39)
        return true;
    
    // Lettres latines capitales
    if(char_a_tester >= 0x41 && char_a_tester <= 0x5A)
        return true;

    // Lettres latines minuscules
    if(char_a_tester >= 0x61 && char_a_tester <= 0x7A)
        return true;

    // Lettres spéciales
    for(int i = 0 ; i < sizeof(lettres_speciales)/sizeof(lettres_speciales[0]) ; i++){
        if(char_a_tester == lettres_speciales[i])
            return true;
    }
    return false;
}