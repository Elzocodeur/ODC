#include <stdio.h>

int main() {
    int temps, heures, minutes, secondes;

    // Saisie du temps en secondes
    printf("Entrez le temps en secondes : ");
    scanf("%d", &temps);

    // Calcul des heures, minutes et secondes
    heures = temps / 3600;
    temps %= 3600;
    minutes = temps / 60;
    secondes = temps % 60;

    // Affichage du résultat
    printf("%d s = %d h : %d min : %d s\n", temps, heures, minutes, secondes);

    return 0;
}
