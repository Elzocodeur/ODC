#include <stdio.h>
#include <stdlib.h>

// Fonction pour calculer la moyenne de chaque colonne d'une matrice
void moyenne_colonnes(int matrice[][50], int n, int m)
{
    int i, j;
    float moyenne;

    // Pour chaque colonne
    for (j = 0; j < m; j++)
    {
        // Initialiser la somme des éléments de la colonne
        int somme = 0;

        // Parcourir les lignes de la colonne
        for (i = 0; i < n; i++)
        {
            somme += matrice[i][j];
        }

        // Calculer la moyenne de la colonne
        moyenne = (float)somme / n;

        // Afficher la moyenne de la colonne
        printf("Moyenne de la colonne %d : %.2f\n", j + 1, moyenne);
    }
}

int main()
{
    // Déclarer la matrice
    int matrice[75][50];

    // Initialiser la matrice avec des valeurs aléatoires
    for (int i = 0; i < 75; i++)
    {
        for (int j = 0; j < 50; j++)
        {
            matrice[i][j] = rand() % 100;
        }
    }

    // Calculer la moyenne des valeurs de chaque colonne
    moyenne_colonnes(matrice, 75, 50);

    return 0;
}