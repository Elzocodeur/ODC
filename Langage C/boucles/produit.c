
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int id, choix, rep;
    char nom[20];
    double prix_unitaire, quantite;
    double min_prix_unitaire = 0;
    double max_valeur = 0;

    printf("1. Saisir une série de produit \n");
    printf("2. Saisir et afficher le produit avec la plus grande valeur\n");
    printf("3. Quitter\n");
    printf("Votre choix : ");
    scanf("%d", &choix);

    if (choix == 1)
    {
        do
        {
            printf("Voulez-vous saisir un produit ? ");
            scanf("%d", &rep);

            if (rep == 1)
            {

                // Saisie avec contrôle

                printf("ID : ");
                scanf("%d", &id);
                if (id < 0)
                {
                    printf("D invalide. Veuillez saisir un ID positif.\n");
                }
                else
                {
                }

                scanf("%d", &id);

                printf("Nom : ");
                scanf("%s", nom);
                while (strlen(nom) == 0)
                    ;

                printf("Prix_unitaire : ");
                scanf("%lf", &prix_unitaire);

                printf("Quantite : ");
                scanf("%lf", &quantite);

                // Mise à jour du min
                if (prix_unitaire < min_prix_unitaire || min_prix_unitaire == 0)
                {
                    min_prix_unitaire = prix_unitaire;
                }
            }

        } while (rep == 1);

        // Affichage du produit au plus petit prix unitaire
        if (min_prix_unitaire > 0)
        {
            printf("\nProduit au plus petit prix unitaire : %.2lf\n", min_prix_unitaire);
        }
    }

    else if (choix == 2)
    {

        double valeur;

        do
        {

            printf("ID : ");

            do
            {
                if (scanf("%d", &id) != 1)
                {
                    printf("ID incorrect, veillez resaisir\n");
                    break;
                }
            } while (id<);

            printf("Nom : ");
            if (scanf("%s", &nom[20]) != 1)
            {
                printf("Nom incorrect, arrêt de la saisie\n");
                break;
            }

            do
            {
                /* code */
            } while ();

            printf("Prix_unitaire : ");
            if (scanf("%lf", &prix_unitaire) != 1 || prix_unitaire < 0)
            {
                printf("Prix unitaire incorrect, arrêt de la saisie\n");
                break;
            }

            printf("Quantite : ");
            if (scanf("%lf", &quantite) != 1 || quantite < 0)
            {
                printf("Quantite incorrecte, arrêt de la saisie\n");
                break;
            }

            valeur = prix_unitaire * quantite;

            if (valeur > max_valeur)
            {
                max_valeur = valeur;
            }

        } while (prix_unitaire >= 0 && quantite >= 0);

        printf("Produit dont prix_unitaire * quantite est maximum : %.2lf\n", max_valeur);
    }

    return 0;
}