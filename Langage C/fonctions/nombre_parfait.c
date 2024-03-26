#include <stdio.h>
#include <math.h>
// prototype
int saisie_nombre(void);
int nombrePremier(int);
int est_parfait(int);
int traite_serie(int);

int main()
{
    int n, resultat;

    n = saisie_nombre();
    resultat = est_parfait(n);

    if (resultat == -1)
    {
        printf("Aucun nombre  parfait n'a été saisie");
    }
    else
    {
        printf("%d  Nombres qui  sont  parfaits  : \n", resultat);
    }

    return 0;
}

// 1. Fonction de contrôle de saisie
int saisie_nombre(void)
{

    int n;

    do
    {
        printf("Entrez un nombre (un nombre premier  pour terminer) : ");
        scanf("%d", &n);

        if (n < 0)
        {
            printf("Nombre invalide !\n");
        }
    } while (n < 0);

    return n;
}

// 2. Fonction de test nombre premier
int nombrePremier(int)
{
    int n;

    int i;
    if (n < 2)
    {
        return 0;
    }

    for (i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            return 0;
        }
    }

    return 1;
}

int est_parfait(int n)
{
    int i, somme = 0;
    for (i = 1; i < n; i++)
    {
        if (n % i == 0)
            somme += i;
    }
    if (somme == n)
        return 1;
    else
        return 0;
}

// Fonction traitement de la série
int traite_serie(int n)
{

    int nb_parfaits = 0, autres = 0;

    while (n != 0 && !nombrePremier(n))
    {
        if (est_parfait(n))
        {
            nb_parfaits++;
        }
        n = saisie_nombre();
    }

    if (nb_parfaits == 0)
    {
        return -1;
    }
}