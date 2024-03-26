#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Animal
{
    char categorie[20];
    float poids;
    char date_naissance[11];
} Animal;

Animal *difference_chevaux(Animal *tab1, int n1, Animal *tab2, int n2)
{
    int i, j, k = 0;
    Animal *tab_chevaux_diff = malloc(n1 * sizeof(Animal));

    for (i = 0; i < n1; i++)
    {
        if (strcmp(tab1[i].categorie, "Cheval") == 0)
        {
            for (j = 0; j < n2; j++)
            {
                if (strcmp(tab1[i].categorie, tab2[j].categorie) == 0 &&
                    strcmp(tab1[i].date_naissance, tab2[j].date_naissance) == 0)
                {
                    break;
                }
            }
            if (j == n2)
            {
                tab_chevaux_diff[k++] = tab1[i];
            }
        }
    }

    return tab_chevaux_diff;
}

int main()
{
    int n1 = 450, n2 = 300;
    Animal tab1[n1], tab2[n2];

    // Remplissage des tableaux tab1 et tab2

    Animal *tab_chevaux_diff = difference_chevaux(tab1, n1, tab2, n2);

    // Affichage des chevaux du premier tableau qui ne sont pas dans le second
    int nb_chevaux_diff = 0;
    for (int i = 0; i < n1; i++)
    {
        if (strcmp(tab_chevaux_diff[i].categorie, "Cheval") == 0)
        {
            printf("Cheval %d :\n", ++nb_chevaux_diff);
            printf(" - Categorie : %s\n", tab_chevaux_diff[i].categorie);
            printf(" - Poids : %.2f kg\n", tab_chevaux_diff[i].poids);
            printf(" - Date de naissance : %s\n", tab_chevaux_diff[i].date_naissance);
            printf("\n");
        }
    }

    free(tab_chevaux_diff);

    return 0;
}
