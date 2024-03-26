#include <stdio.h>

// Fonction pour saisir un tableau
void saisirTableau(int tab[])
{
    int i = 0;
    printf("Entrez les éléments du tableau (entrez une valeur négative pour arrêter) : ");
    while (1)
    {
        scanf("%d", &tab[i]);
        if (tab[i] < 0)
        {
            break;
        }
        i++;
    }
}

// Fonction pour trier les valeurs paires d'un tableau
void trierValeursPaires(int tab[], int taille, int tabTrie[])
{
    int j = 0;
    for (int i = 0; i < taille; i++)
    {
        if (tab[i] % 2 == 0)
        {
            tabTrie[j] = tab[i];
            j++;
        }
    }
}

// Fonction pour afficher un tableau
void afficherTableau(int tab[], int taille)
{
    printf("Tableau paire : ");
    for (int i = 0; i < taille; i++)
    {
        printf("%d ", tab[i]);
    }
    printf("\n");
}

int main()
{
    int tab[100]; // Taille arbitraire du tableau
    saisirTableau(tab);

    int taille = 0;
    for (int i = 0; tab[i] >= 0; i++)
    {
        taille++;
    }

    int tabTrie[taille];
    trierValeursPaires(tab, taille, tabTrie);

    afficherTableau(tabTrie, taille);

    return 0;
}
