#include <stdio.h>

int main()
{
    char rep;
    int nbr2 = 0;

    return 0;
}

int validation1()
{
    char rep;
    do
    {
        printf("Veillez saisir le premier nombre");
        scanf("%d", nbr1);

        if (*nbr1 > 1 && *nbr1 < 5)
        {
            printf("merci de saisir un nombre supérieur à 5");
        }

    } while (nbr1 < 5);

    printf("Voulez-vous continuer ? O/N");

    scanf("%c", &rep);

    if (rep == "o")
    {
        /* code */
    }

    return 0;
}