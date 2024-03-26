#include <stdio.h>
#include <stdbool.h>

int main()
{

    int nombre;
    bool estPremier;

    printf("Entrez un nombre entier positif : ");
    scanf("%d", &nombre);

    estPremier = true;

    // Vérification de tous les nombres de 2 à nombre-1
    for (int i = 2; i < nombre; i++)
    {
        if (nombre % i == 0)
        {
            estPremier = false;
            break;
        }
    }

    if (estPremier)
        printf("%d est premier\n", nombre);
    else
        printf("%d n'est pas premier\n", nombre);

    return 0;
}