#include <stdio.h>

void triCroissant(int tab[], int taille)
{
    int i, j, min, temp;

    for (i = 0; i < taille - 1; i++)
    {
        min = i;

        for (j = i + 1; j < taille; j++)
        {
            if (tab[j] < tab[min])
            {
                min = j;
            }
        }

        if (min != i)
        {
            temp = tab[i];
            tab[i] = tab[min];
            tab[min] = temp;
        }
    }
}

void triDecroissant(int tab[], int taille)
{
    int i, j, max, temp;

    for (i = 0; i < taille - 1; i++)
    {
        max = i;

        for (j = i + 1; j < taille; j++)
        {
            if (tab[j] > tab[max])
            {
                max = j;
            }
        }

        if (max != i)
        {
            temp = tab[i];
            tab[i] = tab[max];
            tab[max] = temp;
        }
    }
}

int main()
{
    int tableau[100];
    int choix, i = 0, j, taille = 0;
    char reponse;

    do
    {
        int nombre;

        do
        {
            printf("Veuillez saisir un nombre pair positif : ");
            scanf("%d", &nombre);

            if (nombre % 2 != 0 || nombre < 0)
            {
                printf("Erreur : le nombre doit être pair et positif.\n");
            }
            else
            {
                tableau[taille] = nombre;
                taille++;
            }
        } while (nombre % 2 != 0 || nombre < 0);

        do
        {
            printf("Voulez-vous continuer ? (Oui/Non) : ");
            scanf(" %c", &reponse);
        } while (reponse != 'O' && reponse != 'N');
    } while (reponse == 'O');

    printf("\nMenu :\n");
    printf("1. Trier le tableau\n");
    printf("2. Transférer les valeurs supérieures à 10 dans un autre tableau\n");
    printf("3. Quitter\n");

    while (1)
    {
        printf("\nVeuillez choisir une option : ");
        scanf("%d", &choix);

        switch (choix)
        {
        case 1:
            printf("\nSous-menu :\n");
            printf("a. Trier par ordre croissant\n");
            printf("b. Trier par ordre décroissant\n");

            char sousChoix;
            printf("Veuillez choisir une option : ");
            scanf(" %c", &sousChoix);

            if (sousChoix == 'a')
            {
                triCroissant(tableau, taille);
            }
            else if (sousChoix == 'b')
            {
                triDecroissant(tableau, taille);
            }
            else
            {
                printf("Option invalide.\n");
            }

            printf("Tableau trié :  ");
            for (i = 0; i < taille; i++)
            {
                printf("%d", tableau[i]);
            }
            printf("\n");
            break;

        case 2:
            int nouveauTableau[100];
            int tailleNouveau = 0;

            for (i = 0; i < taille; i++)
            {
                if (tableau[i] > 10)
                {
                    int estDansNouveauTableau = 0;
                    for (j = 0; j < tailleNouveau; j++)
                    {
                        if (tableau[i] == nouveauTableau[j])
                        {
                            estDansNouveauTableau = 1;
                            break;
                        }
                    }
                    if (!estDansNouveauTableau)
                    {
                        nouveauTableau[tailleNouveau] = tableau[i];
                        tailleNouveau++;
                    }
                }
            }

            printf("Valeurs supérieures à 10 dans un autre tableau (sans doublons) : ");
            for (i = 0; i < tailleNouveau; i++)
            {
                printf("%d ", nouveauTableau[i]);
            }
            printf("\n");
            break;

        case 3:
            return 0;

        default:
            printf("Option invalide.\n");
        }
    }

    return 0;
}
