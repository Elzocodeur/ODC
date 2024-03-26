#include <stdio.h>

int main()
{

    int a, b, ppcm;
    int i = 1;
    // Saisie des nombres
    printf("Entrez le premier entier : ");
    scanf("%d", &a);

    printf("Entrez le second entier : ");
    scanf("%d", &b);

    for ( i = 1; i < a*b; i++)
    {
        if (i%a == 0 && i%b == 0)
        {
            ppcm = i;
        }
        
    }
printf("Le ppcm est %d :\n",ppcm);
    


    return 0;
}