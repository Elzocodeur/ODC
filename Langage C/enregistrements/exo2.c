#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    char *nom;
    char *prenom;
    int date_naissance;
    char *type;
} Artiste;

int main()
{
    // Tableau d'artistes
    Artiste artistes[200];

    // Initialisation du tableau d'artistes
    for (int i = 0; i < 200; i++)
    {
        artistes[i].nom = malloc(sizeof(char) * 20);
        artistes[i].prenom = malloc(sizeof(char) * 20);
        artistes[i].type = malloc(sizeof(char) * 20);
    }

    // Lecture des informations sur les artistes
    for (int i = 0; i < 200; i++)
    {
        printf("Artiste %d :\n", i + 1);
        printf("Nom : ");
        scanf("%s", artistes[i].nom);
        printf("Prénom : ");
        scanf("%s", artistes[i].prenom);
        printf("Date de naissance : ");
        scanf("%d", &artistes[i].date_naissance);
        printf("Type : ");
        scanf("%s", artistes[i].type);
    }

    // Comptage des artistes par type
    int nb_artistes[10] = {0};
    for (int i = 0; i < 200; i++)
    {
        if (strcmp(artistes[i].type, "Peintre") == 0)
        {
            nb_artistes[0]++;
        }
        else if (strcmp(artistes[i].type, "Sculpteur") == 0)
        {
            nb_artistes[1]++;
        }
        else if (strcmp(artistes[i].type, "Photographe") == 0)
        {
            nb_artistes[2]++;
        }
        else if (strcmp(artistes[i].type, "Musicien") == 0)
        {
            nb_artistes[3]++;
        }
        else if (strcmp(artistes[i].type, "Écrivain") == 0)
        {
            nb_artistes[4]++;
        }
        else if (strcmp(artistes[i].type, "Acteur") == 0)
        {
            nb_artistes[5]++;
        }
        else if (strcmp(artistes[i].type, "Réalisateur") == 0)
        {
            nb_artistes[6]++;
        }
        else if (strcmp(artistes[i].type, "Architecte") == 0)
        {
            nb_artistes[7]++;
        }
        else if (strcmp(artistes[i].type, "Designer") == 0)
        {
            nb_artistes[8]++;
        }
        else if (strcmp(artistes[i].type, "Autre") == 0)
        {
            nb_artistes[9]++;
        }
    }

    // Affichage du pourcentage de présence de chaque type d'artiste
    printf("Pourcentage de présence de chaque type d'artiste :\n");
    for (int i = 0; i < 10; i++)
    {
        printf("%s : %.2f%%\n", artistes[i].type, (float)nb_artistes[i] / 200 * 100);
    }

    // Libération de la mémoire allouée
    for (int i = 0; i < 200; i++)
    {
        free(artistes[i].nom);
        free(artistes[i].prenom);
        free(artistes[i].type);
    }

    return 0;
}
