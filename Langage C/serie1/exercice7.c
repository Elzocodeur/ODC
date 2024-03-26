#include <stdio.h>

int main(){
float resistance1, resistance2, resistance3;
//de demande des valeurs de la  des resistances
printf("entrer la valeur de la resistance R1:");
scanf("%f", &resistance1);
printf("enter la valeur de la resistance R2 :");
scanf("%f", &resistance2);
printf("entrer la valeur de la resistance R3");
scanf("%f", &resistance3);

//calcul  de la resistance en serie
float resistanceSerie = resistance1  + resistance2 + resistance3;

//calcul de la resistance en parallele
float resistanceParallele =  (resistance1 * resistance2 * resistance3)/(resistance1*resistance2 + resistance2 * resistance3 + resistance1 * resistance3);

//affichage du resultat
printf("la resistance en serie est de : %.2f ohms\n",resistanceSerie);
printf("la resistance en parallele est de : %.2f ohms\n",resistanceParallele);

return 0;
}
