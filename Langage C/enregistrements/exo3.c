#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    int code;
    char *libelle;
    float prix;
    int quantite;
    char *date_peremption;
} Produit;

int main()
{
    // Tableau de produits
    Produit produits[100];

    // Initialisation du tableau de produits
    for (int i = 0; i < 100; i++)
    {
        produits[i].libelle = malloc(sizeof(char) * 20);
        produits[i].date_peremption = malloc(sizeof(char) * 11);
    }

    // Lecture des informations sur les produits
    for (int i = 0; i < 100; i++)
    {
        printf("Produit %d :\n", i + 1);
        printf("Code : ");
        scanf("%d", &produits[i].code);
        printf("Libellé : ");
        scanf("%s", produits[i].libelle);
        printf("Prix : ");
        scanf("%f", &produits[i].prix);
        printf("Quantité : ");
        scanf("%d", &produits[i].quantite);
        printf("Date de péremption (jj/mm/aaaa) : ");
        scanf("%s", produits[i].date_peremption);
    }

    // Suppression des produits périmés
    int nb_produits_perimes = 0;
    for (int i = 0; i < 100; i++)
    {
        int jour_peremption, mois_peremption, annee_peremption;
        sscanf(produits[i].date_peremption, "%d/%d/%d", &jour_peremption, &mois_peremption, &annee_peremption);

        time_t now = time(NULL);
        struct tm *tm = localtime(&now);
        int jour_actuel = tm->tm_mday;
        int mois_actuel = tm->tm_mon + 1;
        int annee_actuelle = tm->tm_year + 1900;

        if (annee_peremption < annee_actuelle || (annee_peremption == annee_actuelle && mois_peremption < mois_actuel) || (annee_peremption == annee_actuelle && mois_peremption == mois_actuel && jour_peremption < jour_actuel))
        {
            nb_produits_perimes++;

            // Suppression du produit du tableau
            for (int j = i; j < 99; j++)
            {
                produits[j] = produits[j + 1];
            }

            i--;
        }
    }

    // Affichage du nombre de produits périmés supprimés
    printf("Nombre de produits périmés supprimés : %d\n", nb_produits_perimes);

    // Libération de la mémoire allouée
    for (int i = 0; i < 100; i++)
    {
        free(produits[i].libelle);
        free(produits[i].date_peremption);
    }

    return 0;
}
