#include <stdio.h>

int main()
{
    int nombre, nombre_copie, compteur_chiffres = 0;

    do
    {
        printf("Veuillez saisir un nombre entier positif : ");
        scanf("%d", &nombre);

        if (nombre <= 0)
        {
            printf("Erreur ! Le nombre saisit doit être positif.\n");
        }

    } while (nombre <= 0);

    nombre_copie = nombre;

    while (nombre_copie != 0)
    {
        nombre_copie = nombre_copie / 10;
        compteur_chiffres++;
    }

    printf("Le nombre %d contient %d chiffre(s).\n", nombre, compteur_chiffres);

    return 0;
}