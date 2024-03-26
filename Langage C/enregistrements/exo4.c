#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    char *nom;
    char *prenom;
    int age;
    char sexe;
} Personne;

Personne plus_vieille_femme(Personne personnes[], int nb_personnes)
{
    Personne plus_vieille_femme = personnes[0];

    for (int i = 1; i < nb_personnes; i++)
    {
        if (personnes[i].sexe == 'F' && personnes[i].age > plus_vieille_femme.age)
        {
            plus_vieille_femme = personnes[i];
        }
    }

    return plus_vieille_femme;
}

int main()
{
    // Tableau de personnes
    Personne personnes[100];

    // Initialisation du tableau de personnes
    for (int i = 0; i < 100; i++)
    {
        personnes[i].nom = malloc(sizeof(char) * 20);
        personnes[i].prenom = malloc(sizeof(char) * 20);
    }

    // Lecture des informations sur les personnes
    for (int i = 0; i < 100; i++)
    {
        printf("Personne %d :\n", i + 1);
        printf("Nom : ");
        scanf("%s", personnes[i].nom);
        printf("Prénom : ");
        scanf("%s", personnes[i].prenom);
        printf("Age : ");
        scanf("%d", &personnes[i].age);
        printf("Sexe (M/F) : ");
        scanf(" %c", &personnes[i].sexe);
    }

    // Recherche de la plus vielle femme
    Personne plus_vieille_femme = plus_vieille_femme(personnes, 100);

    // Affichage des informations sur la plus vielle femme
    printf("La plus vielle femme est : %s %s, âgée de %d ans.\n", plus_vieille_femme.nom, plus_vieille_femme.prenom, plus_vieille_femme.age);

    // Libération de la mémoire allouée
    for (int i = 0; i < 100; i++)
    {
        free(personnes[i].nom);
        free(personnes[i].prenom);
    }

    return 0;
}
