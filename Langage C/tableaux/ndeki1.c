#include <stdio.h>

void saisir(int t[], int *n, int max_taille)
{
    char reponse = 'o';
    int i = 0, a;
    *n = 0;
    do
    {
        if (reponse == 'o')
        {
            printf("Saisir un nombre : ");
            scanf("%d", &a);
            if (a % 2 == 0)
            {
                t[i++] = a;
                (*n)++;
            }
            else
            {
                printf("Veuillez saisir un nombre pair.\n");
            }
        }
        printf("Voulez-vous continuer ? (o/n) : ");
        scanf(" %c", &reponse);
    } while (reponse == 'o' && i < t);
}

void affiche(int t[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("[%d]\n", t[i]);
    }
}

