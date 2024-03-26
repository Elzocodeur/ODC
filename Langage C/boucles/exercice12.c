#include <stdio.h>

int main()
{

    int nombre, i, somme = 0;

    printf("Entrer un nombre entier positif : ");
    scanf("%d", &nombre);

    // Calcul de la somme des diviseurs propres
    for (i = 1; i < nombre; i++)
    {
        if (nombre % i == 0)
        {
            somme += i;
        }
    }

    // Vérification
    if (somme == nombre)
    {
        printf("%d est un nombre parfait\n", nombre);
    }
    else
    {
        printf("%d n'est pas un nombre parfait\n", nombre);
    }

    return 0;
}