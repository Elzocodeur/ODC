#include <stdio.h>

int main(){
    int heureDepart, minuteDepart,heureArrivee, minuteArrivee,dureeHeuree, dureeMinute;

    //demande de l'heure de depart
    printf("entrer l'heure de départ (h:mn):");
    scanf("%d:%d", &heureDepart, &minuteDepart);
    //demande heure d'arrivée
    printf("entrer l'heure de d'arrivée (h:mn):");
    scanf("%d:%d", &heureArrivee, &minuteArrivee);

    //calcul de la duree en minutes
    dureeMinute = minuteArrivee - minuteDepart;
    if (dureeMinute< 0)
    {
        dureeMinute += 60;
        heureArrivee--;
    }
    //calcul de la duree en heure
    dureeHeuree = heureArrivee - heureDepart;
    if (dureeHeuree<0)
    {
        dureeHeuree += 24;
    }
    //affichage de la duree
    printf("la durée du vol est de : %d heures et de %d minutes",dureeHeuree, dureeMinute);
    
    return 0;
}