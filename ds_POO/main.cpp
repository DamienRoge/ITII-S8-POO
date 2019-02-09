/**
 * AUTEUR : Damien ROGÉ
 * DATE : 09 FEVRIER 2019
 **/

#include <iostream>
#include <string>
#include <stdio.h>
#include "WordCounter.hpp"
using namespace std;


int main(int argc, char **argv){


    /* On cherche l'argument help*/
    for(int i = 0; i < argc; i++)
    {
        if(!strncmp(argv[i], "-h", 256) || !strncmp(argv[i],"--help", 256) ){
            cout << "Argument:\nfilename : file to take into account (if required) Option, dominant:\n--help, -h : display the usage\nOptions, exclusive:\n--count, -c : display the number of words. (Default behaviour, even if not present)\n--add, -a : word add a word in the dictionary" << endl;
        }

        if(!strncmp(argv[i], "-a", 256) || !strncmp(argv[i],"--add", 256) ){
            if(argc == i){ //Aucun mot spécifié après l'option add
                cout << "ERREUR : Veuillez spécifier un mot à ajouter au dictionnaire ..." << endl;
                return -1;
            }
        }

        if(!strncmp(argv[i], "-c", 256) || !strncmp(argv[i],"--count", 256) ){
            //TODO
        }

    }

    //TODO...
    
    return 0;
}