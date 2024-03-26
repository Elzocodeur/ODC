#include <stdio.h>
int main(){
        int a, b;
        int i = 0;
        printf("Saisir a :\n");
        scanf("%d",&a);

        printf("Saisir b :\n");
        scanf("%d",&b);
        while (a!=b)
        {
            i +=1;
            if (a>b)
            {
                a -=b;
            }
            else{
                b -=a;
            }
            
        }
        printf("Le PGCD de %d \n",a);
        
    return 0;
}