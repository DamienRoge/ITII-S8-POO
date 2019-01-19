# ITII-S8-POO

## Exercice 1 : Word Counter

AUTEUR : Damien ROGÉ
DATE : 19 JANVIER 2019
TITRE : COMPTEUR DE MOT DANS UN FICHIER TEXTE UTF-8
DESCRIPTION : Ce programme affiche le nombre de mots utilisant les charactères français 
    dans un fichier passé en paramètre.
AUTRE : BUGS CONNUS : Il semblerait que sur certains OS la lecture des charactères 
    non-ASCII ne se fasse pas correctement avec wfstream, ce qui provoque la 
    non-reconnaissance de ces charactères dans les lettres acceptables par la 
    fonction 'est_lettre_francaise(..)'.
