#include <stdio.h>

int main(){
    float rayon;
    const float PI = 3.14;

    //demande du rayon du cercle
    printf("entrer le rayons du cercle");
    scanf("%f", &rayon);

    //calcul de la surface 
    float surface = PI * rayon *rayon;
    float perimetre = 2 * PI * rayon;

    //affichage du resultat 
    printf("le cercle de rayon %.2f à à une surface de %.2f et de perimetre %.2f \n", rayon, surface, perimetre);

    return 0;
}