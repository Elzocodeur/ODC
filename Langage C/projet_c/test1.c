#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
 #include <curses.h> // Pour Linux, utilisez curses.h

#define LONGUEUR_MAX_LOGIN 20
#define LONGUEUR_MAX_MDP 20

// Structure pour stocker les informations de connexion
typedef struct
{
    char login[LONGUEUR_MAX_LOGIN];
    char motDePasse[LONGUEUR_MAX_MDP];
} Identifiants;


// Fonction pour vérifier les identifiants de connexion
int verifierIdentifiants(Identifiants *identifiants, int nombreIdentifiants, char *login, char *motDePasse)
{
    for (int i = 0; i < nombreIdentifiants; i++)
    {
        if (strcmp(identifiants[i].login, login) == 0 && strcmp(identifiants[i].motDePasse, motDePasse) == 0)
        {
            return 1; // Identifiants valides
        }
    }
    return 0; // Identifiants invalides
}

int main()
{
    // Création des fichiers pour stocker les identifiants
    FILE *fichierAdmin = fopen("admin.txt", "r");
    FILE *fichierEtudiant = fopen("etudiant.txt", "r");

    if (fichierAdmin == NULL || fichierEtudiant == NULL)
    {
        printf("Erreur lors de l'ouverture des fichiers.\n");
        return 1;
    }

    // Lecture des identifiants de l'admin
    Identifiants identifiantsAdmin;
    fscanf(fichierAdmin, "%s %s", identifiantsAdmin.login, identifiantsAdmin.motDePasse);
    fclose(fichierAdmin);

    // Lecture des identifiants de l'étudiant
    Identifiants identifiantsEtudiant;
    fscanf(fichierEtudiant, "%s %s", identifiantsEtudiant.login, identifiantsEtudiant.motDePasse);
    fclose(fichierEtudiant);

    // Variables pour l'authentification
    char saisieLogin[LONGUEUR_MAX_LOGIN];
    char saisieMotDePasse[LONGUEUR_MAX_MDP];

    // Authentification
    do
    {
        printf("Login : ");
        fgets(saisieLogin, LONGUEUR_MAX_LOGIN, stdin);
        saisieLogin[strcspn(saisieLogin, "\n")] = 0; // Supprimer le retour à la ligne
        if (saisieLogin[0] == '\0')
        {
            printf("Login vide. Veuillez saisir un login.\n");
            continue;
        }

        printf("Mot de passe : ");
        int i = 0;
        while (1)
        {
            char c = getch(); // Masquer le caractère saisi
            if (c == '\r') // Si l'utilisateur appuie sur Entrée
            {
                saisieMotDePasse[i] = '\0';
                break;
            }
            else if (c == 127) // Si l'utilisateur appuie sur la touche de suppression (Backspace)
            {
                if (i > 0)
                {
                    i--;
                    printf("\b \b"); // Effacer le caractère précédent
                }
            }
            else
            {
                saisieMotDePasse[i] = c;
                i++;
                printf("*"); // Afficher '*' à l'écran
            }
        }

        printf("\n");
    } while (!verifierIdentifiants(&identifiantsAdmin, 1, saisieLogin, saisieMotDePasse) && !verifierIdentifiants(&identifiantsEtudiant, 1, saisieLogin, saisieMotDePasse));

    // Vérification des identifiants
    if (verifierIdentifiants(&identifiantsAdmin, 1, saisieLogin, saisieMotDePasse))
    {
        // Menu pour l'admin
        int choix;
        do
        {
            printf("\nMenu Admin :\n");
            printf("1. Gestion des étudiants\n");
            printf("2. Gestion de fichier\n");
            printf("3. Marquer les présences\n");
            printf("4. Envoyer un message\n");
            printf("5. Paramètre\n");
            printf("6. Quitter\n");
            printf("Choix : ");
            scanf("%d", &choix);

            // Ajoutez ici les fonctionnalités correspondantes aux choix du menu admin
        } while (choix != 6);
    }
    else if (verifierIdentifiants(&identifiantsEtudiant, 1, saisieLogin, saisieMotDePasse))
    {
        // Menu pour l'étudiant
        int choix;
        do
        {
            printf("\nMenu Étudiant :\n");
            printf("1. Marquer ma présence\n");
            printf("2. Nombre de minutes d'absences\n");
            printf("3. Mes messages\n");
            printf("4. Quitter\n");
            printf("Choix : ");
            scanf("%d", &choix);

            // Ajoutez ici les fonctionnalités correspondantes aux choix du menu étudiant
        } while (choix != 4);
    }
    else
    {
        printf("Identifiants invalides.\n");
    }

    return 0;
}
