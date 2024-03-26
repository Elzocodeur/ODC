#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#ifdef _WIN32
#include <conio.h>
#else
#include <termios.h>
#include <unistd.h>
#endif

// Structure pour stocker les identifiants de IDENTIFIANT
typedef struct
{
    char login[20];
    char password[20];
} Credentials;

// Fonction pour vérifier les identifiants de IDENTIFIANT
int checkCredentials(Credentials *cred, char *login, char *password)
{
    return (strcmp(cred->login, login) == 0 && strcmp(cred->password, password) == 0);
}

// Fonction pour afficher le menu de l'admin
void displayAdminMenu()
{
    printf("1 Gestion des etudiants\n2 Gestion de fichier\n3 Marquer les présences\n4 Envoyer un message\n5 parametre\n6 quitter\n");
}

// Fonction pour afficher le menu de l'étudiant
void displayStudentMenu()
{
    printf("1 Marquer ma présence\n2 Nombre de minutes d'absences\n3 Mes messages\n4 Quitter\n");
}

// Fonction pour masquer le mot de passe à la saisie
void maskPassword(char *password)
{
#ifdef _WIN32
    printf("Password: ");
    int i = 0;
    do
    {
        password[i] = getch();
        if (password[i] != '\r')
        {
            printf("*");
            i++;
        }
    } while (password[i - 1] != '\r');
    password[i - 1] = '\0';
#else
    struct termios old, new;
    tcgetattr(STDIN_FILENO, &old);
    new = old;
    new.c_lflag &= ~(ICANON | ECHO);
    tcsetattr(STDIN_FILENO, TCSANOW, &new);

    printf("Password: ");
    scanf("%s", password);

    tcsetattr(STDIN_FILENO, TCSANOW, &old);
#endif
}

int main()
{
    Credentials admin = {"admin", "passer1234"};
    Credentials student = {"user", "passer24"};
    int choice;

    char login[20], password[20];
    printf("Login: ");
    scanf("%s", login);
    maskPassword(password);

    // Vérification des identifiants de IDENTIFIANT
    if (checkCredentials(&admin, login, password))
    {
        displayAdminMenu();
        scanf("%d", &choice);
        // Ajoutez la logique pour chaque option du menu de l'admin
    }
    else if (checkCredentials(&student, login, password))
    {
        displayStudentMenu();
        scanf("%d", &choice);
        // Ajoutez la logique pour chaque option du menu de l'étudiant
    }
    else
    {
        printf("Identifiants incorrects. Veuillez réessayer.\n");
    }

    return 0;
}
