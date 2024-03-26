#include <stdio.h>

int main()
{

    int prix, somme = 0;

    printf("Saisir le prix d'un article (0 pour terminer) : ");
    scanf("%d", &prix);

    while (prix != 0)
    {
        somme = somme + prix;
        printf("Saisir le prix d'un article (0 pour terminer) : ");
        scanf("%d", &prix);
    }

    printf("La somme des prix est de %d CFA\n", somme);

    return 0;
}