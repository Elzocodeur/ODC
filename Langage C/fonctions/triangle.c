#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Constantes pour les couleurs
#define ROUGE 1
#define BLEU 2
#define VERT 3

// Constantes pour les formes
#define TRIANGLE 1
#define CARRE 2

// Constantes pour les types de triangles
#define TRIANGLE_RECTANGLE 1
#define TRIANGLE_ISOCELE 2

// Foncti2on générique pour dessiner un triangle
void dessiner_triangle(int taille, int type, int couleur)
{
    // Initialiser les variables
    int i, j, espaces;

    // Dessiner le triangle
    // switch (type)
    // {
    // case TRIANGLE_RECTANGLE:
    //     for (i = 1; i <= taille; i++)
    //     {
    //         for (j = 1; j <= i; j++)
    //         {
    //             printf("*");
    //         }
    //         printf("\n");
    //     }
    //     break;
    // case TRIANGLE_ISOCELE:
    //     espaces = taille - 1;
    //     for (i = 1; i <= taille; i++)
    //     {
    //         for (j = 1; j <= espaces; j++)
    //         {
    //             printf(" ");
    //         }
    //         for (j = 1; j <= 2 * i - 1; j++)
    //         {
    //             printf("*");
    //         }
    //         espaces--;
    //         printf("\n");
    //     }
    //     break;
    // }

    // Colorer le triangle
    switch (couleur)
    {
    case ROUGE:
        printf("\033[31m");
        break;
    case BLEU:
        printf("\033[34m");
        break;
    case VERT:
        printf("\033[32m");
        break;
    }

    // Dessiner le triangle
    switch (type)
    {
    case TRIANGLE_RECTANGLE:
        for (i = 1; i <= taille; i++)
        {
                    printf("\t \t \t \t");
            for (j = 1; j <= i; j++)
            {
                printf("*");
                
            }
            printf("\n");
            // Réinitialiser la couleur
            printf("\033[0m");
        }
        break;
    case TRIANGLE_ISOCELE:
        espaces = taille - 1;
        for (i = 1; i <= taille; i++)
        {
                    printf("\t \t \t \t");
            for (j = 1; j <= espaces; j++)
            {
                printf(" ");
            }
            for (j = 1; j <= 2 * i - 1; j++)
            {
                printf("*");
                
            }
            espaces--;
            printf("\n");

            // Réinitialiser la couleu r
                printf("\033[0m");
        }
        break;
    }

    
}

// Fonction pour dessiner un carré
void dessiner_carre(int taille, int couleur)
{
    // Initialiser les variables
    int i, j;

    // Colorer le carré
    switch (couleur)
    {
    case ROUGE:
        printf("\033[31m");
        break;
    case BLEU:
        printf("\033[34m");
        break;
    case VERT:
        printf("\033[32m");
        break;
    }

    // Dessiner le carré
    for (i = 1; i <= taille; i++)
    {
        printf("\t \t \t \t");
        for (j = 1; j <= taille; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    // Réinitialiser la couleur
    printf("\033[0m");
}

// Fonction principale
int main()
{
    // Initialiser les variables
    int nombre1, nombre2, choix_forme, choix_couleur, choix_type_triangle;
    char choix_deuxieme_nombre;

    // Demander le premier nombre
    printf("Entrez le premier nombre : ");
    scanf("%d", &nombre1);

    // Vérifier si l'utilisateur veut saisir un deuxième nombre
    printf("Voulez-vous saisir un deuxième nombre ? (o/n) : ");
    scanf(" %c", &choix_deuxieme_nombre);

    // Si l'utilisateur veut saisir un deuxième nombre
    if (choix_deuxieme_nombre == 'o')
    {
        // Demander le deuxième nombre
        printf("Entrez le deuxième nombre : ");
        scanf("%d", &nombre2);

        // Vérifier que le deuxième nombre est inférieur ou égal au premier nombre
        if (nombre2 > nombre1)
        {
            printf("Le deuxième nombre doit être inférieur ou égal au premier nombre.\n");
            return 1;
        }

        // Demander le choix de la forme
        printf("Choisissez une forme (1. Triangle, 2. Carré) : ");
        scanf("%d", &choix_forme);

        // Dessiner la forme
        switch (choix_forme)
        {
        case TRIANGLE:
            // Demander le choix du type de triangle
            printf("Choisissez un type de triangle (1. Rectangle, 2. Isocèle) : ");
            scanf("%d", &choix_type_triangle);

            // Dessiner le triangle
            dessiner_triangle(nombre1, choix_type_triangle, choix_couleur);
            break;
        case CARRE:
            // Demander le choix de la couleur
            printf("Choisissez une couleur (1. Rouge, 2. Bleu, 3. Vert) : ");
            scanf("%d", &choix_couleur);

            // Dessiner le carré
            dessiner_carre(nombre2, choix_couleur);
            break;
        }
    }
    // Si l'utilisateur ne veut pas saisir un deuxième nombre
    else
    {
        // Demander le choix de la forme
        printf("Choisissez une forme (1. Triangle, 2. Carré) : ");
        scanf("%d", &choix_forme);

        // Dessiner la forme
        switch (choix_forme)
        {
        case TRIANGLE:
            // Demander le choix du type de triangle
            printf("Choisissez un type de triangle (1. Rectangle, 2. Isocèle) : ");
            scanf("%d", &choix_type_triangle);

            // Dessiner le triangle
            dessiner_triangle(nombre1, choix_type_triangle, choix_couleur);
            break;
        case CARRE:
            // Dessiner le carré
            dessiner_carre(nombre1, BLEU);
            break;
        }
    }

    return 0;
}
