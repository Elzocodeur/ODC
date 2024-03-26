#include <stdio.h>
#include <math.h>
int main()
{
    float x1, y1, x2, y2, resistance;

    //demande des coordonnées A et B
    printf("entrer les coordonnées du point A(x1, y1):");
    scanf("%f %f",&x1, &y1);
    printf("entrer les coordonnées du point B(x2, y2):");
    scanf("%f %f",&x2, &y2);

    //calcul de la distance
    resistance = sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));

    //affichage du resultat
    printf("la distance entre les points A et B est de : %.2f\n",resistance);

    return 0;
}   