#ifndef _MANIPULATION_FICHIERS_H_
#define _MANIPULATION_FICHIERS_H_

/*-------------------------
          DEFINE
-------------------------*/

#define FICHIER_ENTREE_T "texte_initial.txt"
#define FICHIER_ENTREE_B "texte_compresse.bin"
#define FICHIER_SORTIE_T "texte_final.txt"
#define FICHIER_SORTIE_B "texte_compresse.bin"

/*-------------------------
        PROTOTYPES
-------------------------*/

/*
Fonction créant un pointeur sur un fichier ouvert selon le mode 
passé en paramètre.
- Premier paramètre :
    l : lecture.
    e : ecriture.
- Deuxième paramètre :
    t : texte.
    b : binaire.
*/

FILE* ouvrir_fichier ( char lectureOuEcriture, char texteOuBinaire ) ;

#endif