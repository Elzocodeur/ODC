#include <stdio.h>
int main()
{
    int a, b, c, d;
        printf("Saisir a :");
        scanf("%d",&a);

        printf("Saisir b :");
        scanf("%d", &b);

        printf("Saisir c :");
        scanf("%d", &c);

        printf("Saisir d :");
        scanf("%d", &d);

    int min1 = a, min2 = b;
    int max1 = a, max2 = b;

    if (min1 > min2)
    {
        int tmp = min1;
        min1 = min2;
        min2 = tmp;
    }

    if (c < min1)
    {
        min2 = min1;
        min1 = c;
    }
    else if (c < min2)
    {
        min2 = c;
    }

    if (d < min1)
    {
        min2 = min1;
        min1 = d;
    }
    else if (d < min2)
    {
        min2 = d;
    }

    if (max1 < max2)
    {
        int tmp = max1;
        max1 = max2;
        max2 = tmp;
    }

    if (c > max1)
    {
        max2 = max1;
        max1 = c;
    }
    else if (c > max2)
    {
        max2 = c;
    }

    if (d > max1)
    {
        max2 = max1;
        max1 = d;
    }
    else if (d > max2)
    {
        max2 = d;
    }

    printf(" L'ordre décroissant est  %d %d %d %d\n",min1, min2, max1, max2);
    printf(" L'ordre croissant est  %d %d %d %d\n",max1,max2,min1,min2);


    return 0;
}

