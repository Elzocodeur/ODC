#include <stdio.h>

int main(){
    int hh1, mn1, ss1;
    int hh2, mn2, ss2;
    int maxHeure, maxmn, maxss;

    printf("Donner la premiére heure munite seconde");
    scanf("%d %d %d",&hh1, &mn1, &ss1);

    printf("Donner la premiére heure munite seconde");
    scanf("%d %d %d",&hh2, &mn2, &ss2);

    //controle de validation de saisie
    if (
        //heure1
        (hh1<=0|| hh1 >23)||( mn1 < 0 || mn1 > 60) ||( ss1 < 0 || ss1 > 60)||

        //heur2
        (hh2<=0|| hh2 >23)||( mn2 < 0 || mn2 > 60) ||( ss2 < 0 || ss2 > 60)

        )
    {
        printf("Date invalide");
    }

    //compare heure
    if (hh1 > hh1)
    {
        maxHeure = hh1;
    }else{
        maxHeure = hh2;
    }

    //minute
    if (mn1 > mn2)
    {
        maxmn =  mn1;
    }else{
        maxmn = mn2;
    }

    //seconde
    if (ss1 > ss2)
    {
        maxss = ss1;
    }else{
        maxss = ss2;
    }
    
    
    
    

    printf("l'heure est %dh %dmn %ds :\n",maxHeure, maxmn, maxss);
    return 0;
}