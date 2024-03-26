#include <stdio.h>

// Test si un nombre est premier
int estPremier(int nombre)
{
    for (int i = 2; i < nombre; i++)
    {
        if (nombre % i == 0)
            return 0;
    }
    return 1;
}

// Afficher les N premiers nombres premiers
void N_premiers(int N)
{

    int compteur = 0;
    int nombre = 2; // début à 2

    while (compteur < N)
    {
        if (estPremier(nombre))
        {
            printf("%d ", nombre);
            compteur++;
        }
        nombre++;
    }
    printf("\n");
}

int main()
{

    int N;

    printf("Saisir N : ");
    scanf("%d", &N);
    printf("Les %d premiers nombres premiers sont : \n", N);

    N_premiers(N);

    return 0;
}