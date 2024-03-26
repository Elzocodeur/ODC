#include <stdio.h>

// int nombreJoursDansMois(int annee, int mois)
// {
//     int nbJours;

//     if (mois == 1 || mois == 3 || mois == 5 || mois == 7 ||
//         mois == 8 || mois == 10 || mois == 12)
//     {
//         nbJours = 31;
//     }
//     else if (mois == 4 || mois == 6 || mois == 9 || mois == 11)
//     {
//         nbJours = 30;
//     }
//     else if (mois == 2)
//     {
//         if (annee % 4 == 0 && (annee % 100 != 0 || annee % 400 == 0))
//         {
//             nbJours = 29;
//         }
//         else
//         {
//             nbJours = 28;
//         }
//     }

//     return nbJours;
// }

int nombreJoursDansMois(int annee, int mois)
{
    int nbJours;

    switch (mois)
    {
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
        nbJours = 31;
        break;
    case 4:
    case 6:
    case 9:
    case 11:
        nbJours = 30;
        break;
    case 2:
        if (annee % 4 == 0 && (annee % 100 != 0 || annee % 400 == 0))
        {
            nbJours = 29;
        }
        else
        {
            nbJours = 28;
        }
        break;
    }

    return nbJours;
}

int saisie(int *annee, int *mois)
{
    printf("Entrer une annee : ");
    scanf("%d", annee);

    while (*annee < 0)
    {
        printf("L'année ne peut être négative. \nVeuillez entrer une année valide : ");
        scanf("%d", annee);
    }

    printf("Entrer un mois (1-12) : ");
    scanf("%d", mois);

    while (*mois < 1 || *mois > 12)
    {
        printf("Le mois doit être compris entre 1 et 12. \nVeuillez entrer un mois valide : ");
        scanf("%d", mois);
    }
}

int main()
{
    int annee, mois, nbJours;

    saisie(&annee, &mois);

    nbJours = nombreJoursDansMois(annee, mois);

    printf("Ce mois a %d jours.\n", nbJours);

    return 0;
}
