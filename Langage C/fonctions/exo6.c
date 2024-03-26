#include <stdio.h>
void saisie_date(int *j, int *m, int *a);
int date_valide(int j, int m, int a);
void date_suivante(int *j, int *m, int *a);

void saisie_date(int *j, int *m, int *a)
{

    do
    {
        printf("Saisir une date jj/mm/aaaa : ");
        scanf("%d/%d/%d", j, m, a);

        if (!date_valide(*j, *m, *a))
        {
            printf("Date invalide, ressaisir\n");
        }

    } while (!date_valide(*j, *m, *a));
}

int main()
{

    int j, m, a;

    saisie_date(&j, &m, &a);

    if (date_valide(j, m, a))
    {
        date_suivante(&j, &m, &a);
        printf("Date suivante : %02d/%02d/%04d", j, m, a);
    }
    else
    {
        printf("Date invalide");
    }
    return 0;
}

int dateValide(int j, int m, int a)
{

    if (a < 0)
    {
        return 0;
    }

    if (m < 1 || m > 12)
    {
        return 0;
    }

    if (j < 1)
    {
        return 0;
    }

    if (m == 2)
    {
        if (a % 4 == 0 && (j > 29))
        {
            return 0;
        }
        else if (j > 28)
        {
            return 0;
        }
    }
    else if (m == 4 || m == 6 ||
            m == 9 || m == 11)
    {

        if (j > 30)
        {
            return 0;
        }
    }
    else
    {

        if (j > 31)
        {
            return 0;
        }
    }

    return 1;
}

void date_suivante(int *j, int *m, int *a)
{

    (*j)+=5; // Incrementer le jour

    if (*m == 2 && *j > 28)
    {
        // Traitement spécial pour février
        *j = 5;
        (*m)++;
    }
    else if (/* mois de 30 jours */ *j > 30)
    {
        *j = 5;
        (*m)++;
    }
    else if (/* mois de 31 jours */ *j > 31)
    {
        *j = 5;
        (*m)++;
    }

    if (*m > 12)
    {
        *m = 1;
        (*a)++; // Passage à l'année suivante
    }
}