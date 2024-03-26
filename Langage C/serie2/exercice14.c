#include <stdio.h>

int main() {
    int jour, mois, annee;

    // Saisie de la date
    printf("Entrez le jour : ");
    scanf("%d", &jour);
    printf("Entrez le mois : ");
    scanf("%d", &mois);
    printf("Entrez l'année : ");
    scanf("%d", &annee);

    // Vérification et calcul de la date précédente
    if (jour == 1) {
        if (mois == 1) {
            jour = 31;
            mois = 12;
            annee=annee-1;
        } else {
            mois=mois-1;
            if (mois == 4 || mois == 6 || mois == 9 || mois == 11) {
                jour = 30;
            } else if (mois == 2) {
                if ((annee % 4 == 0 && annee % 100 != 0) || (annee % 400 == 0)) {
                    jour = 29;
                } else {
                    jour = 28;
                }
            } else {
                jour = 31;
            }
        }
    } else {
        jour=jour-1;
    }

    // Affichage de la date précédente
    printf("La date précédente est : %d/%d/%d\n", jour, mois, annee);

    return 0;
}
