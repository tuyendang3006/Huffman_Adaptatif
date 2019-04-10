#ifndef _STRUCTURES_H_
#define _STRUCTURES_H_

/*-------------------------
        TYPE ARBRE
-------------------------*/
/*
- NOEUD
	- est_feuille = 0
	- poids
	- parent
	- fg
	- fd
*/

typedef struct arbre_huffman
{
	int est_feuille ;
    int poids ;
    char caractere ;
    struct arbre_huffman *parent ;
    struct arbre_huffman *fg ;
    struct arbre_huffman *fd ;
} t_arbre, *Arbre ;

/*-------------------------
        TYPE LISTE
-------------------------*/
/*
- FEUILLE
	- est_feuille = 1
	- poids
	- caractère
	- parent
*/
typedef struct maillon
{
	Arbre arbre ;
    struct maillon *prec ;
    struct maillon *suiv ;
} t_maillon, *Maillon ;

#endif