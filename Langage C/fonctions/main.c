#include <stdio.h>
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include "dessin1.h"

// Fonction principale
int main() {
    int nombre;

    // Demander à l'utilisateur de saisir un nombre >= 3
    do {
        printf("Veuillez entrer le premier nombre :\n ");
        scanf("%d", &nombre);
    } while (nombre < 3);

    char choix;
    printf("Voulez-vous saisir un autre nombre? (O/N): \n");
    scanf(" %c", &choix);

    if (choix == 'O' || choix == 'o') {
        int deuxieme_nombre;
        do {
            printf("Veuillez entrer un nombre supérieur à %d: ", nombre);
            scanf("%d", &deuxieme_nombre);
        } while (deuxieme_nombre > nombre);

        // Dessiner un carré ou un rectangle
        char dessin;
        printf("Quel dessin voulez-vous?\n");
        printf("C pour carré! \n R pour rectangle: \n");
        scanf(" %c", &dessin);

        if (dessin == 'C' || dessin == 'c') {
            dessiner_carre(deuxieme_nombre);
        } else if (dessin == 'R' || dessin == 'r') {
            int longueur;
            printf("Veuillez entrer la longueur du rectangle: \n ");
            scanf("%d", &longueur);
            dessiner_rectangle(longueur, deuxieme_nombre);
        }
    } else {
        // L'utilisateur ne veut pas saisir un autre nombre
        // Demander une couleur et quel dessin il veut
        char couleur[20];
        printf("Choisissez une couleur: \n");
        printf("----------choix-----------------------------\n");

        printf("--------"); printf("1.  jaune: \n");
        printf("-------");  printf("2.  bleu:  \n");  
        printf("------");   printf("3.  rouge: \n"); 

        printf("--------------------------------------------");

        scanf("%s", couleur);
        

        char choix_dessin;
        printf("Quel dessin voulez-vous?\n");
        printf("C pour carré,\n T pour triangle: \n");
        scanf(" %c", &choix_dessin);

        if (choix_dessin == 'C' || choix_dessin == 'c') {
            int taille;
            printf("Entrez la taille du carré: ");
            scanf("%d", &taille);
            dessiner_carre(taille);
        } else if (choix_dessin == 'T' || choix_dessin == 't') {
            // Demander le type de triangle
            char type_triangle;
            printf("Quel type de triangle voulez-vous?\n");
            printf("I pour isocèle, R pour rectangle: ");
            scanf(" %c", &type_triangle);

            int taille_triangle;
            printf("Entrez la taille du triangle: ");
            scanf("%d", &taille_triangle);

            if (type_triangle == 'I' || type_triangle == 'i') {
                // Dessiner un triangle isocèle
                for (int i = 1; i <= taille_triangle; i++) {
                sleep(.07);
                    printf("\t \t \t \t");

                    for (int j = 1; j <= taille_triangle - i; j++) {
                        printf(" ");
                    }
                    for (int k = 1; k <= 2 * i - 1; k++) {
                        printf("\033[32m*\033[0m");
                    }
                // sleep(.07);
                // system("clear");

                    printf("\n");
                }
            } else if (type_triangle == 'R' || type_triangle == 'r') {
                // Dessiner un triangle rectangle
                // while (1)
                // {
                //     sleep(.01);
                        
                    for (int i = 1; i <= taille_triangle; i++) {
                    printf("\t \t \t \t");
                    for (int j = 1; j <= i; j++) {
                        printf("\033[34m*\033[0m");
                        
                    }
                    printf("\n");
                }
                // }
                // sleep(.01);
                // system("clear");
                
                
            }
        }
    }

    return 0;
}