#include <stdio.h>

int main (){
    int heure, minute, sconde;

    printf("Donner une heure munite seconde");
    scanf("%d %d %d",&heure, &minute, &sconde);


    if ((heure < 0 || heure >  23) || (minute < 0 || minute > 60) || (sconde < 0 || sconde > 60) )
    {
        printf("Date invalide") ;
    }else{
        if (sconde != 59)
        {
            sconde += 1;
        }else{
            sconde = 0;
        }
        if (minute != 59)
        {
            minute += 1;
        }else{
            minute = 0;
        }if (heure !=23)
        {
            heure +=1;
        }
        else{
            heure = 0;
        }
        
        
        
    }
    printf("L'heure est:  %dh %dmn %ds \n", heure, minute,sconde);
    return 0;
} 
