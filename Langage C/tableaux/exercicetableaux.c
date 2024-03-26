#include <stdio.h>
#include <ncurses.h>
#include "exercicetableaux.h"

int main()
{
    int tableau[2];
    int choix, i = 0, j, taille = 0;

    int exercices;

    printf("\t \t \t\033[1mExercicees sur les tableaux\033[0m\n \n");

    printf("\t \t \t1.Exercice1:\n");
    printf("\t \t \t2.Exercice 2:\n");
    printf("\t \t \t3.Exercice 3:\n");

    printf("Votre choix:\n");
    scanf("%d", &exercices);

    if (exercices == 1)
    {

        char reponse;

        do
        {
            int nombre;

            do
            {
                printf("Veuillez saisir un nombre pair positif : ");
                scanf("%d", &nombre);

                if (nombre % 2 != 0 || nombre < 0)
                {
                    printf("Erreur : le nombre doit être pair et positif.\n");
                }
                else
                {
                    tableau[taille] = nombre;
                    taille++;
                }
            } while (nombre % 2 != 0 || nombre < 0);

            do
            {
                printf("Voulez-vous continuer ? (Oui/Non) : ");
                scanf(" %c", &reponse);
            } while (reponse != 'O' && reponse != 'N');
            
        } while (reponse == 'O');

        printf("\t \t \t\033[1mMenu\033[0m\n \n");
        printf("1. Trier le tableau\n");
        printf("2. Transférer les valeurs supérieures à 10 dans un autre tableau\n");
        printf("3. Quitter\n");

        while (1)
        {
            printf("\nVeuillez choisir une option : ");
            scanf("%d", &choix);

            switch (choix)
            {
            case 1:
                printf("\t \t \t\033[1mSou-Menu\033[0m\n \n");
                printf("a. Trier par ordre croissant\n");
                printf("b. Trier par ordre décroissant\n");

                char sousChoix;
                printf("Veuillez choisir une option : ");
                scanf(" %c", &sousChoix);

                if (sousChoix == 'a')
                {
                    triCroissant(tableau, taille);
                }
                else if (sousChoix == 'b')
                {
                    triDecroissant(tableau, taille);
                }
                else
                {
                    printf("Option invalide.\n");
                }

                printf("Tableau trié :  ");
                for (i = 0; i < taille; i++)
                {
                    printf("%d", tableau[i]);
                }
                printf("\n");
                break;

            case 2:
                int nouveauTableau[100];
                int tailleNouveau = 0;

                for (i = 0; i < taille; i++)
                {
                    if (tableau[i] > 10)
                    {
                        int estDansNouveauTableau = 0;
                        for (j = 0; j < tailleNouveau; j++)
                        {
                            if (tableau[i] == nouveauTableau[j])
                            {
                                estDansNouveauTableau = 1;
                                break;
                            }
                        }
                        if (!estDansNouveauTableau)
                        {
                            nouveauTableau[tailleNouveau] = tableau[i];
                            tailleNouveau++;
                        }
                    }
                }

                printf("Valeurs supérieures à 10 dans un autre tableau (sans doublons) : ");
                for (i = 0; i < tailleNouveau; i++)
                {
                    printf("%d ", nouveauTableau[i]);
                }
                printf("\n");
                break;

            case 3:
                return 0;

            default:
                printf("Option invalide.\n");
            }
        }
    }

    if (exercices == 2)
    {
        int pos, val;

        do
        {
            printf("\t \t \t\033[1mMenu\033[0m\n \n");
            printf("\n1. Saisir  nombres (0 pour quitter)\n \n");
            printf("\n2. Inserer une valeur dans le tableau \n\n");
            printf("\n3. Supprimer une valeur a une position du tableau\n\n");
            printf("\n4. Quitter le programme\n");
            printf("Choix: ");
            scanf("%d", &choix);

            switch (choix)
            {
            case 1:
                printf("Saisir  nombres entiers (0 pour arreter):\n");
                do
                {
                    scanf("%d", &val);
                    if (val == 0)
                    {
                        break;
                    }
                    if (val < 0)
                    {
                        printf("Veuillez saisir un nombre positif.\n");
                        continue;
                    }

                    if (taille == 0)
                    {
                        tableau[0] = val;
                    }
                    else
                    {
                        for (i = taille - 1; i >= 0 && tableau[i] > val; i--)
                        {
                            tableau[i + 1] = tableau[i];
                        }
                        tableau[i + 1] = val;
                    }
                    taille++;

                    printf("Tableau trie: ");
                    for (i = 0; i < taille; i++)
                    {
                        printf("%d ", tableau[i]);
                    }
                    printf("\n");
                } while (1);
                break;

            case 2:
                printf("Inserer une valeur positive dans le tableau: ");
                scanf("%d", &val);
                for (i = taille - 1; i >= 0 && tableau[i] > val; i--)
                {
                    tableau[i + 1] = tableau[i];
                }
                tableau[i + 1] = val;
                taille++;
                printf("Tableau apres insertion: ");
                for (i = 0; i < taille; i++)
                {
                    printf("%d ", tableau[i]);
                }
                printf("\n");
                break;

            case 3:
                printf("Supprimer une valeur a une position du tableau (index): ");
                scanf("%d", &pos);
                for (i = pos; i < taille - 1; i++)
                {
                    tableau[i] = tableau[i + 1];
                }
                taille--;
                printf("Tableau apres suppression: ");
                for (i = 0; i < taille; i++)
                {
                    printf("%d ", tableau[i]);
                }
                printf("\n");
                break;

            case 4:
                printf("Au revoir!\n");
                break;

            default:
                printf("Choix invalide. Veuillez reessayer.\n");
            }
        } while (choix != 4);
    }
    
    return 0;
}