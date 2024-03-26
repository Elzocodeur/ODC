#include <stdio.h>

int main()
{

    int jour, mois, annee, n;

    printf("Saisir le jour : ");
    scanf("%d", &jour);

    printf("Saisir le mois : ");
    scanf("%d", &mois);

    printf("Saisir l'annee : ");
    scanf("%d", &annee);

    printf("Saisir le nombre de jours N : ");
    scanf("%d", &n);

    if (n > 0)
    {
        if (jour > 1)
        {
            jour = jour - n;
        } 
        else
        {
            if (mois > 1)
            {
                mois = mois - 1;
                jour = 31;
            }
            else
            {
                if (annee > 1)
                {
                    jour = 31;
                    mois = 12;
                    annee = annee - 1;
                    
                }
                else
                {
                    printf("Date invalide");
                    return 1;
                }
            }
        }
    }

    printf("La date d'il y a %d jours etait : %02d/%02d/%04d", n, jour, mois, annee);

    return 0;
}