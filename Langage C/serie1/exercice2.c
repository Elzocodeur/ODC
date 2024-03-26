#include <stdio.h>

int main(){
    float valeurDm;
    //demande de la valeur en dm
    printf("entrer une valeur en décimetre: ");
    scanf("%f", &valeurDm);

    //conversion  en m
    float valeurM = valeurDm/10;
    //conversion en mm
    float valeurMm = valeurDm * 100;
    //conversion en  cm
    float valeurCm = valeurDm * 10;

    //conversion en hm
    float valeurHm = valeurDm /1000;


    //affichage du résultat
    printf("%.2f dm  est égal à :\n",valeurDm);
    printf("%.2f  m\n",valeurM);
    printf("%.2f mm\n",valeurMm);
    printf("%.2f cm\n",valeurCm);
    printf("%.2f hm\n",valeurHm);

return 0;

}