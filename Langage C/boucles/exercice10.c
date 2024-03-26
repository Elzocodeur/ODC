#include <stdio.h>

int main()
{

    int nbr1, nbr2, somme1 = 0, somme2 = 0;

    printf("Entrez nombre 1 : ");
    scanf("%d", &nbr1);

    printf("Entrez nombre 2 : ");
    scanf("%d", &nbr2);

    // Calcul somme diviseurs de nbr1
    for (int i = 1; i < nbr1; i++)
    {
        if (nbr1 % i == 0)
            somme1 += i;
    }

    // Calcul somme diviseurs de nbr2
    for (int j = 1; j < nbr2; j++)
    {
        if (nbr2 % j == 0)
            somme2 += j;
    }

    // Vérification
    if (somme1 == nbr2 && somme2 == nbr1)
        printf("%d et %d sont amis.\n", nbr1, nbr2);
    else
        printf("%d et %d ne sont pas amis.\n", nbr1, nbr2);

    return 0;
}