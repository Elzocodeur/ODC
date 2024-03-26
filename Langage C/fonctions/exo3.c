#include <stdio.h>
int saisieDate(void);
int dateValide(int, int, int);

// procedure

void saisie_date(int *j, int *m, int *a)
{

    do
    {
        printf("Saisir date (jj/mm/aaaa) : ");
        scanf("%d/%d/%d", j, m, a);

        if (!date_valide(*j, *m, *a))
        {
            printf("Date incorrecte!\n");
        }

    } while (!date_valide(*j, *m, *a));
}

//**********************main%***********************
int main()
{

    int jours, mois, annee;
    saisieDate();

    if (dateValide(jours, mois, annee))
    {
        printf(" est une date valide");
    }
    else
    {
        printf(" n'est pas valide");
    }

    // procedure
    // saisie_date(&jours, &mois, &annee);

    // if (date_valide(jours, mois, annee))
    // {
    //     printf("Date valide");
    // }
    // else
    // {
    //     printf("Date invalide");
    // }

    return 0;
}
//*********************end main********************

int saisieDate(void)
{
    int jour, mois, annee;

    do
    {
        printf("Entrer une date valide");
        scanf("%d/%d/%d",&jour,&mois,&annee);

    } while (jour < 0 && jour > 31 || mois < 0 && mois >= 12 || annee < 0);
}

int dateValide(int jour, int mois, int annee)
{

    if (annee < 0)
    {
        return 0;
    }

    if (mois < 1 || mois > 12)
    {
        return 0;
    }

    if (jour < 1)
    {
        return 0;
    }

    if (mois == 2)
    {
        if (annee % 4 == 0 && (jour > 29))
        {
            return 0;
        }
        else if (jour > 28)
        {
            return 0;
        }
    }
    else if (mois == 4 || mois == 6 ||
            mois == 9 || mois == 11)
    {

        if (jour > 30)
        {
            return 0;
        }
    }
    else
    {

        if (jour > 31)
        {
            return 0;
        }
    }

    return 1;
}
