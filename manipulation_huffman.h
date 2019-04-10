#ifndef _MANIPULATION_HUFFMAN_H_
#define _MANIPULATION_HUFFMAN_H_

/*-------------------------
        PROTOTYPES
-------------------------*/

/*
Fonction créant un arbre de Huffman initial.
*/
Arbre creation_arbre_huffman ( void ) ;

/*
Fonction créant une liste avec les pointeurs sur les noeuds 
et feuilles de l'arbre de Huffman et les poids de chacun 
de ces éléments. La liste suit l'ordre de Gallager.
*/
Maillon creation_liste_gallager ( Arbre arbre ) ;

/*
Fonction ajoutant un caractère ou augmentant son poids dans 
un arbre de Huffman.
*/
void incrementation_poids_feuille ( Maillon liste, int caractere ) ;

/*
Fonction modifiant un arbre de Huffman à partir de l'un de ses 
noeuds pour faire en sorte qu'il respecte l'ordre de Gallager.
*/
void maj_arbre ( Maillon liste, Arbre arbre ) ;

#endif