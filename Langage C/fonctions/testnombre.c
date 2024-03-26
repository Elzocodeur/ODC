#include <tesnombreprototype.h>

int sommeChiffres(int n)
{
    int somme = 0;
    while (n > 0)
    {
        somme += n % 10;
        n /= 10;
    }
    return somme;
}

