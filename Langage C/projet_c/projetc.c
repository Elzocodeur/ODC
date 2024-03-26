#include<stdio.h>
#include <stdlib.h>
#include <string.h>
#include "projetc.h"
int main(){
    
    user admin = {"admin", "passer1234"};
    user student = {"user", "passer24"};
    int choice;

    char login[20], password[20];
    printf("Login: ");
    scanf("%s", login);
    printf("Password: ");
    scanf("%s", password);


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