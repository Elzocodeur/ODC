#include <stdio.h>

int main()
{

    int nombre, nb_saisis = 0, nb_premiers = 0;
    int premiers[100];
    int i = 0;

    // Saisie des nombres
    do
    {
        printf("Saisir un nombre (0 pour terminer) : ");
        scanf("%d", &nombre);

        if (nombre != 0)
        {
            nb_saisis++;

            // Test si le nombre est premier
            int est_premier = 1;
            for (int j = 2; j < nombre; j++)
            {
                if (nombre % j == 0)
                {
                    est_premier = 0;
                    break;
                }
            }

            if (est_premier)
            {
                premiers[i] = nombre;
                i++;
                nb_premiers++;
            }
        }
    } while (nombre != 0);

    // Affichage des résultats
    printf("Nombre d'entiers saisis : %d\n", nb_saisis);
    printf("Nombre de nombres premiers saisis : %d\n", nb_premiers);
    printf("Liste des nombres premiers saisis : \n");

    for (int k = 0; k < nb_premiers; k++)
    {
        printf("%d ", premiers[k]);
    }

    return 0;
}