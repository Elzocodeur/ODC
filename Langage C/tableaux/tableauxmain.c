#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include "tableaux.h"

int main()
{
    int choix;

    printf("Menu exercices sur les tableaux\n");

    printf("---------------exercice 1:\n");
    printf("---------------exercice 2:\n");
    printf("---------------exercice 3:\n");
    printf("---------------exercice 4:\n");
    printf("---------------exercice 5:\n");
    printf("---------------exercice 6:\n");
    printf("---------------exercice 7:\n");
    printf("---------------exercice 8:\n");
    printf("---------------exercice 9:\n");
    printf("---------------exercice 10:\n");
    printf("---------------exercice 12:\n");

    printf("Votre choix:\n");
    scanf("%d", &choix);

    do
    {
        if (choix < 1 || choix > 12)
        {
            printf("choix indisponible, veiller resaisir un bon choix\n");
            scanf("%d", &choix);
        }

    } while (choix < 1 || choix > 12);

    if (choix == 1)
    {
        int tab[5] = {1, 2, 3, 4, 5};
        if (elementsConsecutifs(tab, 5))
        {
            printf("Le tableau contient des éléments consécutifs\n");
        }
        else
        {
            printf("Le tableau ne contient pas d'éléments consécutifs\n");
        }
    }

    if (choix == 2)
    {
        int tab1[8] = {1, 3, 5, 7, 9, 0, 0, 0};
        int tab2[4] = {2, 4, 6, 8};

        fusionner(tab1, 5, tab2, 4);

        printf("Tableau fusionne : \n");

        for (int i = 0; i < 9; i++)
        {
            printf("%d ", tab1[i]);
        }
    }

    if (choix == 3)
    {
        int tab[] = {1, 2, 3, 4, 5};
        int taille = sizeof(tab) / sizeof(tab[0]);

        int *tab_inverse = inverser_tableau(tab, taille);

        for (int i = 0; i < taille; i++)
        {
            printf("%d ", tab_inverse[i]);
        }
    }

    if (choix == 4)
    {
        int N = 250;
        int tab1[N];
        int tab2[N];
        int resultat[N];

        // Remplissage aléatoire des tableaux
        for (int i = 0; i < N; i++)
        {
            tab1[i] = i;
            tab2[i] = 2 * i;
        }

        additionTab(tab1, tab2, resultat, N);

        // Affichage des 10 premières valeurs
        printf("Resultat (10 premiers elements) : \n");
        for (int i = 0; i < 10; i++)
        {
            printf("%d ", resultat[i]);
        }
    }

    if (choix == 5)
    {
        int n1 = 150, n2 = 30;
        int tab1[n1], tab2[n2];

        // Initialisation aléatoire des tableaux

        for (int i = 0; i < n1; i++)
        {
            tab1[i] = i;
        }

        for (int i = 0; i < n2; i++)
        {
            tab2[i] = i * 2;
        }

        int resultat = calculSom(tab1, tab2, n1, n2);

        printf("Som = %d", resultat);
    }

    if (choix == 6)
    {
        int taille;
        printf("Entrez la taille du tableau: ");
        scanf("%d", &taille);

        // Vérifier que la taille est positive
        if (taille <= 0)
        {
            printf("La taille du tableau doit être positive.\n");
            return 1;
        }

        int nombres[taille];
        int i;
        int min, max;
        double somme = 0.0;

        // Saisie des nombres
        for (i = 0; i < taille; i++)
        {
            printf("Entrez le nombre %d (entre -100 et 100): ", i + 1);
            scanf("%d", &nombres[i]);

            // Vérifier que le nombre est dans l'intervalle [-100, 100]
            if (nombres[i] < -100 || nombres[i] > 100)
            {
                printf("Le nombre doit être compris entre -100 et 100.\n");
                i--; // Demander à nouveau le même nombre
                continue;
            }

            // Initialiser min et max avec le premier nombre saisi
            if (i == 0)
            {
                min = max = nombres[i];
            }

            // Mise à jour de min et max
            if (nombres[i] < min)
            {
                min = nombres[i];
            }
            if (nombres[i] > max)
            {
                max = nombres[i];
            }

            // Calcul de la somme pour la moyenne
            somme += nombres[i];
        }

        // Calcul de la moyenne
        double moyenne = somme / taille;

        // Affichage des résultats
        printf("Minimum: %d\n", min);
        printf("Maximum: %d\n", max);
        printf("Moyenne: %.2f\n", moyenne);
    }

    if (choix == 7)
    {
        int n;
        double x;

        // Saisie de la taille du tableau
        printf("Entrez la taille du tableau: ");
        scanf("%d", &n);

        // Vérification que la taille est positive
        if (n <= 0)
        {
            printf("La taille du tableau doit être positive.\n");
            return 1;
        }

        // Création du tableau avec une taille supplémentaire pour l'insertion
        double T[n + 1];

        // Saisie des éléments du tableau déjà trié
        printf("Entrez les éléments du tableau trié en ordre croissant:\n");
        for (int i = 0; i < n; i++)
        {
            scanf("%lf", &T[i]);
        }

        // Saisie du nombre réel à insérer
        printf("Entrez le nombre réel à insérer: ");
        scanf("%lf", &x);

        // Insertion du nombre réel dans le tableau
        insererDansTableauTrie(T, &n, x);

        // Affichage du tableau après insertion
        printf("Tableau après insertion:\n");
        for (int i = 0; i < n; i++)
        {
            printf("%.2lf ", T[i]);
        }
        printf("\n");
    }

    if (choix == 8)
    {
        int m, n;

        // Saisie des deux nombres
        printf("Entrez le premier nombre: ");
        scanf("%d", &m);
        printf("Entrez le deuxième nombre: ");
        scanf("%d", &n);

        // Test si les nombres sont amis
        if (sontAmis(m, n))
        {
            printf("Les nombres %d et %d sont amis.\n", m, n);
        }
        else
        {
            printf("Les nombres %d et %d ne sont pas amis.\n", m, n);
        }
    }

    if (choix == 9)
    {
        int n;

        // Saisie de la taille du tableau
        printf("Entrez la taille du tableau: ");
        scanf("%d", &n);

        // Vérification que la taille est positive
        if (n <= 0)
        {
            printf("La taille du tableau doit être positive.\n");
            return 1;
        }

        int arr[n];

        // Saisie des éléments du tableau
        printf("Entrez les éléments du tableau:\n");
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &arr[i]);
        }

        int position, longueur;
        trouverSousSuiteLaPlusLongue(arr, n, &position, &longueur);

        // Affichage de la position et de la longueur de la sous-suite la plus longue
        printf("La sous-suite de valeurs la plus longue commence à la position %d et a une longueur de %d.\n", position, longueur);
    }

    if (choix == 10)
    {
        int n1, n2;

    // Saisie de la taille du premier tableau
    printf("Entrez la taille du premier tableau: ");
    scanf("%d", &n1);
    int arr1[n1];

    // Saisie des éléments du premier tableau
    printf("Entrez les éléments du premier tableau trié en ordre croissant:\n");
    for (int i = 0; i < n1; i++)
    {
        scanf("%d", &arr1[i]);
    }

    // Saisie de la taille du deuxième tableau
    printf("Entrez la taille du deuxième tableau: ");
    scanf("%d", &n2);
    int arr2[n2];

    // Saisie des éléments du deuxième tableau
    printf("Entrez les éléments du deuxième tableau trié en ordre croissant:\n");
    for (int i = 0; i < n2; i++)
    {
        scanf("%d", &arr2[i]);
    }

    // Création du tableau fusionné
    int arrFusionne[n1 + n2];

    // Fusion des deux tableaux
    fusionnerTableaux(arr1, n1, arr2, n2, arrFusionne);

    // Affichage du tableau fusionné
    printf("Tableau fusionné:\n");
    for (int i = 0; i < n1 + n2; i++)
    {
        printf("%d ", arrFusionne[i]);
    }
    printf("\n");
    }
    if (choix == 11)
    {
            int lignes, colonnes;
    printf("Entrez le nombre de lignes de la matrice: ");
    scanf("%d", &lignes);
    printf("Entrez le nombre de colonnes de la matrice: ");
    scanf("%d", &colonnes);

    int matrice[100][100]; // Taille maximale de la matrice

    // Saisie de la matrice binaire
    printf("Entrez les éléments de la matrice binaire (0 ou 1):\n");
    for (int i = 0; i < lignes; i++)
    {
        for (int j = 0; j < colonnes; j++)
        {
            scanf("%d", &matrice[i][j]);
        }
    }

    int colonneMaxZero, ligneMaxUn;
    double pourcentageZero, pourcentageUn;

    // Analyse de la matrice
    analyserMatriceBinaire(matrice, lignes, colonnes, &colonneMaxZero, &ligneMaxUn, &pourcentageZero, &pourcentageUn);

    // Affichage des résultats
    printf("Numéro de la colonne contenant le plus de 0: %d\n", colonneMaxZero + 1);
    printf("Numéro de la ligne contenant le plus de 1: %d\n", ligneMaxUn + 1);
    printf("Pourcentage de 0 dans la matrice: %.2f%%\n", pourcentageZero);
    printf("Pourcentage de 1 dans la matrice: %.2f%%\n", pourcentageUn);
    }
    
    return 0;
}