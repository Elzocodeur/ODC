#include <stdio.h>

int  main(){
    int n,somme=0,i;
    
    
    do
    {
        printf("Entrer un nombre ");
        scanf("%d",&n);
    } while (n<=0);
    
    for ( i=1; i<n; i++)
    {
        if (n%i==0)
        {
            somme=somme+i;
        }     
    }
    if (somme==n)
        {
            printf(" %d est un nombre parfait",n);
        }
        else{
            printf("nombre imparfait");
        }
    return 0; 
}