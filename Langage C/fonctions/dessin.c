#include <stdio.h>

// Fonction pour dessiner un carré clignotant
void dessiner_carre(int taille) {
                for (int i = 0; i < taille; i++) {
                    printf("\t \t \t \t");printf("*");
                    for (int j = 0; j < taille; j++) {
                        printf("\033[31m*\033[0m");
                        
                    }
                    
                    printf("\n");
                }         
                
}       

                
// Fonction pour dessiner un rectangle clignotant
void dessiner_rectangle(int longueur, int largeur) {
    for (int i = 0; i < largeur; i++) {
        for (int j = 0; j < longueur; j++) {
                    printf("\t \t \t \t");
                        printf("\033[36m*\033[0m");
            
        }
        printf("\n");
    }
}


