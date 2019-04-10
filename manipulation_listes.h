#ifndef _MANIPULATION_LISTES_H_
#define _MANIPULATION_LISTES_H_

/*-------------------------

        PROTOTYPES

-------------------------*/

/*
Fonction créant une liste vide.
*/
Maillon cree_vide ( void ) ;

/*
Fonction retournant 1 ou 0 si la liste donnée
en paramètre est respectivement vide ou pleine.
*/
int est_vide ( Maillon liste ) ;

/*
Fonction retournant le premier élément de la
liste donnée en paramètre.
*/
Arbre tete_liste ( Maillon liste ) ;

/*
Fonction ajoutant un élément donné en paramètre
en queue de la liste donnée en paramètre.
*/
Maillon ajout_queue_liste ( Maillon liste, Arbre arbre ) ;

/*
Fonction recherchant un maillon portant un caractère donné 
en paramètre dans la liste de Gallager et retournant le maillon 
le portant si il existe, NULL sinon.
*/
Maillon recherche_liste ( Maillon liste, int caractere ) ;

/*
Fonction affichant les éléments d'une liste (debug).
*/
void afficher_liste_test ( Maillon liste ) ;

/*
Fonction qui échange deux maillons donnés en paramètre.
*/
void echanger_maillons ( Maillon maillon_1, Maillon maillon_2 ) ;

#endif