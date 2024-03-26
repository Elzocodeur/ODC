#include <stdio.h>
#include <math.h>

int main()
{
        float longueur, largueur;
        // demande de la longueur et de la largueur du rectangle
        printf("entrer la longueur du rectangle");
        scanf("%f",&longueur);
        printf("entrer la largueur du rectangle");
        scanf("%f", &largueur);

        //calcule du perimetre
        float perimetre = 2*(longueur + largueur);

        //calcul de la surface
        float surface = longueur * largueur;
        // calcule du diagonale
        float diagonale = sqrt(longueur * longueur + largueur * largueur);

        //affichage du resultat
        printf("Le rectangle de longueur %.2f et de largueur %.2f à:", longueur, largueur);
        printf("perimetre %.2f \n", perimetre);
        printf("surface %.2f \n", surface);
        printf("diagonale %.2f \n", diagonale);




    return 0;
}