#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int matricule;
    char *nom;
    char *prenom;
    char *classe;
} Etudiant;

Etudiant *union_tableaux(Etudiant t1[], int nb_etudiants1, Etudiant t2[], int nb_etudiants2) {
    // Allocation de la mémoire pour le tableau d'union
    Etudiant *union = malloc(sizeof(Etudiant) * (nb_etudiants1 + nb_etudiants2));

    // Copie du premier tableau dans le tableau d'union
    for (int i = 0; i < nb_etudiants1; i++) {
        union[i] = t1[i];
    }

    // Copie du deuxième tableau dans le tableau d'union
    for (int i = 0; i < nb_etudiants2; i++) {
        union[i + nb_etudiants1] = t2[i];
    }

    // Retourne le tableau d'union
    return union;
}

int main() {
    // Tableau d'étudiants 1
    Etudiant t1[100];

    // Initialisation du tableau d'étudiants 1
    for (int i = 0; i < 100; i++) {
        t1[i].matricule = i + 1;
        t1[i].nom = malloc(sizeof(char) * 20);
        t1[i].prenom = malloc(sizeof(char) * 20);
        t1[i].classe = malloc(sizeof(char) * 20);
    }

    // Lecture des informations sur les étudiants 1
    for (int i = 0; i < 100; i++) {
        printf("Étudiant %d :\n", i + 1);
        printf("Matricule : %d\n", t1[i].matricule);
        printf("Nom : ");
        scanf("%s", t1[i].nom);
        printf("Prénom : ");
        scanf("%s", t1[i].prenom);
        printf("Classe : ");
        scanf("%s", t1[i].classe);
    }

    // Tableau d'étudiants 2
    Etudiant t2[100];

    // Initialisation du tableau d'étudiants 2
    for (int i = 0; i < 100; i++) {
        t2[i].matricule = i + 101;
        t2[i].nom = malloc(sizeof(char) * 20);
        t2[i].prenom = malloc(sizeof(char) * 20);
        t2[i].classe = malloc(sizeof(char) * 20);
    }

    // Lecture des informations sur les étudiants 2
    for (int i = 0; i < 100; i++) {
        printf("Étudiant %d :\n", i + 1);
        printf("Matricule : %d\n", t2[i].matricule);
        printf("Nom : ");
        scanf("%s", t2[i].nom);
        printf("Prénom : ");
        scanf("%s", t2[i].prenom);
        printf("Classe : ");
        scanf("%s", t2[i].classe);
    }

    // Union des deux tableaux d'étudiants
    Etudiant *union = union_tableaux(t1, 100, t2, 100);

    // Affichage des informations sur les étudiants de l'union
    printf("Tableau d'union des étudiants :\n");
    for (int i = 0; i < 100 + 100; i++) {
        printf("Étudiant %d :\n", i + 1);
        printf("Matricule : %d\n", union[i].matricule);
        printf("Nom : %s\n", union[i].nom);
        printf("Prénom : %s\n", union[i].prenom);
        printf("Classe : %s\n", union[i].classe);
    }

    // Libération de la mémoire allouée
    for (int i = 0; i < 100; i++) {
        free(t1[i].nom);
        free(t1[i].prenom);
        free(t1[i].classe);
    }

    for (int i = 0; i < 100; i++) {
        free(t2[i].nom);
        free(t2[i].prenom);
        free(t2[i].classe);
    }

    free(union);

    return 0;
}
