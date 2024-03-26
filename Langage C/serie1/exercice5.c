#include <stdio.h>

int main()
{
    float valeurCFA;
    float tauxDolar = 655.95;
    float tauxLivreSterling = 882.45;

    //demande de la valeur en CFA
    printf("entrer une valeur en CFA");
    scanf("%f", &valeurCFA);

    //conversion en dollar
    float valeurDollar = valeurCFA/tauxDolar;

    //conversion en livre sterling
    float valeurLivreSterling = valeurCFA/tauxLivreSterling;

    //affichage du resultat
    printf("%.2f CFA est égal à :", valeurCFA);
    printf("%.2f $ ", valeurDollar);
    printf("%.2f £ :", valeurCFA);

    return 0;
}