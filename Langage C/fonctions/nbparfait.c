#include <stdio.h>

int estParfait(int n);
int estPremier(int n);

int main()
{
    int n, nbParfaits = 0;

    do
    {
        printf("Entrez un nombre parfait  : ");
        scanf("%d", &n);

        if (n != 0 && estParfait(n))
        {
            nbParfaits++;
        }
    } while (n != 0 && !estParfait(n));

    if (nbParfaits == 0)
    {
        printf("Aucun nombre parfait dans la serie\n");
    }
    else
    {
        printf("Nombre de nombres parfaits : %d\n", nbParfaits);
    }

    return 0;
}

int estParfait(int n)
{
    int i, somme = 0;

    for (i = 1; i < n; i++)
    {
        if (n % i == 0)
        {
            somme += i;
        }
    }

    if (somme == n)
    {
        printf("%d est parfait\n", n);
        return 1;
    }
    else
    {
        return 0;
    }
}

int estPremier(int n)
{
    int i;

    for (i = 2; i <= n / 2; i++)
    {
        if (n % i == 0)
        {
            printf("%d est parfait\n", n);
            return 1;
        }
    }

    return 0;
}