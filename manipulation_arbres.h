#ifndef _MANIPULATION_ARBRES_H_
#define _MANIPULATION_ARBRES_H_

/*-------------------------
        PROTOTYPES
-------------------------*/

/*
Fonction créant une feuille avec un poids et un caractère et la 
retournant via un pointeur.
*/
Arbre cree_feuille ( int poids, int caractere ) ;

/*
Fonction créant un noeud avec deux arbres donnés en paramètres.
*/
Arbre cree_noeud ( Arbre fg, Arbre fd, int poids ) ;

/*
Fonction affichant les feuilles et noeuds d'un arbre (compiler).
*/
void afficher_arbre_test ( Arbre arbre ) ;

/*
Fonction qui échange deux arbres données en paramètre.
*/
void echanger_arbres ( Arbre arbre_1, Arbre arbre_2 ) ;

#endif