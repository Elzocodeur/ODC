#include <stdio.h>

int  main(){
    float temperatureCelsuis;

    printf("Entrer  une température en selsuis");
    scanf("%f", &temperatureCelsuis);

    float temperatureFahrenheit = (temperatureCelsuis * 9/5) - 32;

    //affichage du résultat
    printf("%.2f dégrés celsuis est  égal à %2.f dégrés fahrenheit\n", temperatureCelsuis );
    
    return 0;
}