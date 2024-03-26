#include <stdio.h>

int main(){
    int nombre, somme,i;
    float moyenne;
    printf("donne un nombre");
    scanf("%d",&nombre);
    
    do
    {
    somme +=1;
    i++;
    } while (i<nombre);
    moyenne = somme/nombre;

    printf("la moyenne est %.2f:\n",moyenne);
    printf("la somme est %d:",somme);

}