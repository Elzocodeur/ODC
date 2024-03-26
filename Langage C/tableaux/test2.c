#include <stdio.h>

void afficherTableau(int tableau[], int taille)
{
    for (int i = 0; i < taille; i++)
    {
        printf("%d ", tableau[i]);
    }
    printf("\n");
}

int main()
{
    int tableau1[100], tableau2[100];
    int taille1 = 0, taille2 = 0;
    int valeur, i, j, doublon = 0;

    printf("Menu:\n");
    printf("1. Saisir les tableaux\n");
    printf("2. Afficher les tableaux\n");
    printf("3. Fusionner les tableaux\n");
    printf("4. Intersection des tableaux\n");
    printf("5. Différence des tableaux\n");
    printf("6. Quitter\n");

    int choix;
    do
    {
        printf("Choix: ");
        scanf("%d", &choix);

        switch (choix)
        {
        case 1:
            printf("Saisie du premier tableau:\n");
            do
            {
                printf("Saisir une valeur (-1 pour arrêter) : ");
                scanf("%d", &valeur);

                // Vérifier doublon dans le premier tableau
                for (i = 0; i < taille1; i++)
                {
                    if (tableau1[i] == valeur)
                    {
                        doublon = 1;
                        break;
                    }
                }

                if (doublon)
                {
                    printf("Doublon détecté, arrêt de la saisie du premier tableau.\n");
                    break;
                }

                tableau1[taille1++] = valeur;

            } while (valeur != -1);

            doublon = 0; // Réinitialiser le flag doublon

            printf("Saisie du deuxième tableau:\n");
            do
            {
                printf("Saisir une valeur (-1 pour arrêter) : ");
                scanf("%d", &valeur);

                // Vérifier doublon dans le deuxième tableau
                for (i = 0; i < taille2; i++)
                {
                    if (tableau2[i] == valeur)
                    {
                        doublon = 1;
                        break;
                    }
                }

                if (doublon)
                {
                    printf("Doublon détecté, arrêt de la saisie du deuxième tableau.\n");
                    break;
                }

                tableau2[taille2++] = valeur;

            } while (valeur != -1);

            break;

        case 2:
            printf("Affichage des tableaux:\n");
            printf("Premier tableau (non trié): ");
            afficherTableau(tableau1, taille1);
            printf("Deuxième tableau (non trié): ");
            afficherTableau(tableau2, taille2);
            break;

            // Ajoutez les autres cas pour les options 3, 4, 5 ici

        case 6:
            printf("Programme quitté.\n");
            break;

        default:
            printf("Choix invalide. Veuillez réessayer.\n");
        }

    } while (choix != 6);

    return 0;
}
