#include <stdio.h>

int main()
{
    char symbole;
    int hauteur_feuille, hauteur_tronc, largeur_racine, i, j, k;

    // Saisie des informations
    printf("Saisir le symbole ($, *, +, 0) : ");
    scanf("%c", &symbole);

    printf("Hauteur des feuilles : ");
    scanf("%d", &hauteur_feuille);

    printf("Hauteur du tronc : ");
    scanf("%d", &hauteur_tronc);

    printf("Largeur des racines : ");
    scanf("%d", &largeur_racine);

    // Dessin du sapin
    for (i = 0; i < hauteur_feuille; i++)
    {
        for (j = 0; j <= i; j++)
        {
            printf("%c ", symbole);
        }
        printf("\n");
    }

    for (i = 0; i < hauteur_tronc; i++)
    {
        printf("%c ", symbole);
    }

    for (i = 0; i < largeur_racine; i++)
    {
        for (k = 0; k < i + 1; k++)
        {
            printf("%c ", symbole);
        }
        printf("\n");
    }

    return 0;
}