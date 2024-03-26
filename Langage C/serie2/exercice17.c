A#include <stdio.h>

int main() {
    int jour1, mois1, annee1;
    int jour2, mois2, annee2;

    // Entrée de la première date
    printf("Entrez la première date (jour mois année) : ");
    scanf("%d %d %d", &jour1, &mois1, &annee1);

    // Entrée de la deuxième date
    printf("Entrez la deuxième date (jour mois année) : ");
    scanf("%d %d %d", &jour2, &mois2, &annee2);

    // Comparaison des dates
    if (annee1 < annee2) {
        printf("La première date est antérieure à la deuxième date.\n");
    } else if (annee1 > annee2) {
        printf("La deuxième date est antérieure à la première date.\n");
    } else {
        if (mois1 < mois2) {
            printf("La première date est antérieure à la deuxième date.\n");
        } else if (mois1 > mois2) {
            printf("La deuxième date est antérieure à la première date.\n");
        } else {
            if (jour1 < jour2) {
                printf("La première date est antérieure à la deuxième date.\n");
            } else if (jour1 > jour2) {
                printf("La deuxième date est antérieure à la première date.\n");
            } else {
                printf("Les deux dates sont identiques.\n");
            }
        }
    }

    return 0;
}
