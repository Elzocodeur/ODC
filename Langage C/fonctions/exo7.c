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

int date_valide(int j, int m, int a)
{

    // Vérifications sur le jour, le mois et l'année

    return 1; // ou 0 si invalide
}

void date_suivante(int *j, int *m, int *a)
{

    (*j)++; // Incrementer le jour

    if (*m == 2 && *j > 28)
    {
        // Traitement spécial pour février
        *j = 1;
        (*m)++;
    }
    else if (/* mois de 30 jours */ *j > 30)
    {
        *j = 1;
        (*m)++;
    }
    else if (/* mois de 31 jours */ *j > 31)
    {
        *j = 1;
        (*m)++;
    }

    if (*m > 12)
    {
        *m = 1;
        (*a)++; // Passage à l'année suivante
    }
}