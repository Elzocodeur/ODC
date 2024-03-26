#include <stdio.h>

int main()
{

    int nombre, plusGrand, rang, compteur;

    // Initialiser
    plusGrand = 0;
    rang = 1;
    compteur = 1;

    printf("Saisir un nombre : ");
    scanf("%d", &nombre);

    plusGrand = nombre;

    // Lire les 9 nombres restants
    while (compteur < 10)
    {
        printf("Saisir un nombre : ");
        scanf("%d", &nombre);

        if (nombre > plusGrand)
        {
            plusGrand = nombre;
            rang = compteur + 1;
        }

        compteur++;
    }

    // Afficher
    printf("Plus grand nombre : %d\n", plusGrand);
    printf("Rang : %d\n", rang);

    return 0;
}