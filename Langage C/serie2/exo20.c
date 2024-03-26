#include <stdio.h>
#include <math.h>

int main()
{
    char sexe;
    float taille, poids, PI, BMI;

    printf("Entrez votre sexe (M/F) : \n");
    scanf(" %c", &sexe);

    if (sexe != 'M' && sexe != 'F')
    {
        printf("Sexe invalide.\n");
        return 1; // retourne une erreur
    }

    printf("Entrez votre taille (en m) : \n");
    scanf("%f", &taille);

    printf("Entrez votre poids (en kg) : \n");
    scanf("%f", &poids);

    BMI = poids / pow(taille, 2);
    printf("Votre BMI est : %.2f \n", BMI);

    if (sexe == 'F')
    {
        PI = (taille - 100) - (taille - 120) / 4;
    }
    else if (sexe == 'M')
    {
        PI = (taille - 100) - (taille - 150) / 4;
    }

    printf("Votre PI est : %.2f \n", PI);

    if (BMI <= 27)
    {
        printf("Vous êtes une personne normale.\n");
    }
    else if (BMI > 27 && BMI < 32)
    {
        printf("Vous êtes obèse.\n");
    }
    else
    {
        printf("Vous êtes malade.\n");
    }

    return 0;
}
