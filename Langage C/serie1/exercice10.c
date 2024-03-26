#include <stdio.h>

int main(){
    int secondes, heurs, minutes;
    //demande du nombres de seconde
    printf("entrer le nombres de secondes :");
    scanf("%d", &secondes);

    //calcul des heures
    heurs = secondes/3600;

    //calcul des minutes
    minutes =  (secondes/3600)/60;

    //calcul des secondes restantes

    secondes +=60;

    //affichage du resultat
    printf("%d secondes correspond à %d heures %d minutes %d secondes \n",secondes,heurs,minutes,secondes);

}