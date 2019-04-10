#---------------------------------------------------------------------------
# Nom du fichier : makefile
# Auteur : DANG Thi Thanh Tuyen
# Objet : Commandes de compilation du programme de Huffman Adaptatif
# Pour executer : Tapez "make"
#---------------------------------------------------------------------------

main: interface.c 
      manipulation_arbres.c 
	  manipulation_listes.c 
	  manipulation_fichiers.c 
	  manipulation_huffman.c
	  gcc main.c interface.c manipulation_arbres.c manipulation_listes.c manipulation_fichiers.c manipulation_huffman.c -o quang.exe

#---------------------------------------------------------------------------