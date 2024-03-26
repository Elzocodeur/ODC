/*Exercice 7 : Écrire un algorithme qui lit 
deux valeurs entières ( A et B ) 
puis les affichent dans l’ordre croissant 
et décroissant*/

#include<stdio.h>
int main()
{
    int a,b;

    printf("Merci d'entrer deux valeurs a et b: \n");
    scanf("%d %d",&a,&b);
    if (a<b)
    {
        printf("Dans l'ordre croissant on a : %d , %d \n",a,b);
        printf("Dans l'ordre décroissant on a : %d , %d \n",b,a);
    }
    else
    {
        printf(" Dans l'ordre croissant on a : %d , %d \n",b,a);
        printf(" Dans l'ordre croissant on a : %d , %d \n",a,b);
    }
    
    return 0;
}