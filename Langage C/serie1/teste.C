#include<stdio.h>
int main(){
    int  jour , moi , annee ;
    printf("donner une date ");
    scanf("%d /%d  / %d " , &jour , &moi , &annee);

    if ((jour>=1 && jour<=31) && (moi>=1 && moi<=31) && (annee>0 && annee<=2024)) {

        if (moi==1 || moi==3 || moi==5 || moi==7 || moi==8 || moi==10)
        {
            if (jour==1)
            {
                jour=31;
                moi=moi-1;

            }else
            {
                jour= jour-1;
            }
            
            
        }
        
    }
    printf("%d %d %d " , j, m ,a);
}