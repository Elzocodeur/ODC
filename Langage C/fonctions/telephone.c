#include <stdio.h>
#include <string.h>

#define NUM_FIXE 9
#define TAILLE_NUM 19

void nettoyerBuffer()
{
    int c;
    while ((c = getchar()) != '\n' && c != EOF)
    {
    } // Nettoie le buffer d'entrée
}

int saisirEtValiderNumeroFixe()
{
    char input[NUM_FIXE + 1];
    printf("Veuillez entrer un numéro de téléphone fixe (33#######) : ");
    fgets(input, sizeof(input), stdin);
    input[strcspn(input, "\n")] = '\0';

    if (strlen(input) != NUM_FIXE)
    {
        printf("Numéro invalide. Le numéro doit contenir exactement %d chiffres.\n", NUM_FIXE);
        return 1;
    }

    for (int i = 0; i < NUM_FIXE; i++)
    {
        if (input[i] < '0' || input[i] > '9')
        {
            printf("Numéro invalide. Le numéro doit contenir uniquement des chiffres.\n");
            return 1;
        }
    }

    if (strncmp(input, "33", 2) != 0)
    {
        printf("Numéro invalide. Le numéro doit commencer par \"33\".\n");
        return 1;
    }

    printf("Numéro valide.\n");
    return 0;
}

int saisirEtValiderNumeroPortable()
{
    char tel_mobile[TAILLE_NUM + 1];
    printf("Veuillez entrer votre numéro de téléphone portable (+221) 77 001 00 00 ou 00221 70 007 00 00) : ");
    fgets(tel_mobile, sizeof(tel_mobile), stdin);
    tel_mobile[strcspn(tel_mobile, "\n")] = '\0';

    // Ajoutez ici la logique de validation et d'affichage de l'opérateur pour le numéro de téléphone portable
    // ...

    return 0;
}

void afficherMenu()
{
    printf("\n---------------------------------------------------------------------------------------------\n");
    printf("                               Bienvenue dans le menu                                          \n");
    printf("1 ------- Saisir un numéro fixe puis tester si c'est valide ou pas                             \n");
    printf("2 ------- Saisir un numéro de téléphone portable, teste puis affiche l'opérateur               \n");
    printf("3 --------------------------------------- Quitter ---------------------------------------------\n");
}

int main()
{
    int choix;
    do
    {
        afficherMenu();
        printf("\nChoisissez une option: ");
        scanf("%d", &choix);
        nettoyerBuffer();

        switch (choix)
        {
        case 1:
            saisirEtValiderNumeroFixe();
            break;
        case 2:
            saisirEtValiderNumeroPortable();
            break;
        case 3:
            printf("Merci & Aurevoir !!!\n");
            break;
        default:
            printf("Option invalide. Veuillez choisir une option valide.\n");
        }
    } while (choix != 3);

    return 0;
}