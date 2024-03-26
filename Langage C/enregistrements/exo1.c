#include <stdio.h>
#include <math.h>
#include"enregistrement.h"

int main(){
    
Point A, B;
    saisir_point(&A);
    saisir_point(&B);
    float dist = distance(A, B);
    printf("La distance entre A et B est : %.2f\n", dist);
    


    return 0;
}