#include <stdio.h>

int main()
{
    int a, b, resultat = 0;

    // Demander les nombres
    printf("Entrez a : ");
    scanf("%d", &a);
    printf("Entrez b : ");
    scanf("%d", &b);

    // Tant que a >= b
    while (a >= b)
    {
        // Soustraire b de a
        a = a - b;
        // Augmenter le résultat
        resultat++;
    }

    // Afficher le résultat
    printf("Le résultat de la division e de %d par %d est : %d\n", a, b, resultat);

    return 0;
}