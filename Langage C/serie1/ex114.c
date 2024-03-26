#include <stdio.h>

int main() {
    // Déclaration des variables pour jour, mois et année
    int jour, mois, annee;

    // Saisie de la date par l'utilisateur
    printf("Veuillez entrer la date (jour mois annee) : ");
    scanf("%d %d %d", &jour, &mois, &annee);

    // Vérifier si la date est valide
    if (jour < 1 || jour > 31 || mois < 1 || mois > 12) {
        printf("Date invalide.\n");
        return 1; // Quitter le programme avec un code d'erreur
    }

    // Vérifier si l'année est bissextile
    int estBissextile = (annee % 4 == 0 && annee % 100 != 0) || (annee % 400 == 0);

    // Vérifier la validité du jour en fonction du mois
    int joursDansMois = 0;

    if (mois == 2) {
        joursDansMois = (estBissextile) ? 29 : 28;
    } else if (mois == 4 || mois == 6 || mois == 9 || mois == 11) {
        joursDansMois = 30;
    } else {
        joursDansMois = 31;
    }

    // Vérifier si le jour est valide
    if (jour < 1 || jour > joursDansMois) {
        printf("Date invalide.\n");
        return 1; // Quitter le programme avec un code d'erreur
    }

    // Calculer la date précédente
    jour--;

    if (jour < 1) {
        mois--;

        if (mois < 1) {
            mois = 12;
            annee--;
        }

        if (mois == 2) {
            joursDansMois = (estBissextile) ? 29 : 28;
        } else if (mois == 4 || mois == 6 || mois == 9 || mois == 11) {
            joursDansMois = 30;
        } else {
            joursDansMois = 31;
        }

        jour = joursDansMois;
    }

    // Afficher la date précédente
    printf("La date précédente est : %d/%d/%d\n", jour, mois, annee);

    return 0;
}
