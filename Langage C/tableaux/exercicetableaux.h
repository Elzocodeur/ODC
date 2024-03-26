#ifndef exercicetableaux
#define exercicetableaux

void triCroissant(int tab[], int taille)
{
    int i, j, min, temp;

    for (i = 0; i < taille - 1; i++)
    {
        min = i;

        for (j = i + 1; j < taille; j++)
        {
            if (tab[j] < tab[min])
            {
                min = j;
            }
        }

        if (min != i)
        {
            temp = tab[i];
            tab[i] = tab[min];
            tab[min] = temp;
        }
    }
}

void triDecroissant(int tab[], int taille)
{
    int i, j, max, temp;

    for (i = 0; i < taille - 1; i++)
    {
        max = i;

        for (j = i + 1; j < taille; j++)
        {
            if (tab[j] > tab[max])
            {
                max = j;
            }
        }

        if (max != i)
        {
            temp = tab[i];
            tab[i] = tab[max];
            tab[max] = temp;
        }
    }
}

#endif