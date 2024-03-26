#include <stdio.h>
#include <string.h>

int main()
{

    
    char numero[20];

    // Partie 1: Numéro de téléphone fixe
    printf("Entrez un numéro de téléphone fixe: ");
    scanf("%s", numero);

    // Vérification du numéro de téléphone fixe
    if (strlen(numero) != 9 || numero[0] != '3' || numero[1] != '3')
    {
        printf("Erreur: Le numéro de téléphone fixe doit commencer par 33 et contenir 7 chiffres.\n");
        return 1;
    }
    for (int i = 0; i < 9; i++)
    {
        if (numero[i] < '0' || numero[i] > '9')
        {
            printf("Erreur: Le numéro de téléphone fixe ne doit pas contenir de caractères autres que des chiffres.\n");
            // return 1;
        }
    }

    // Partie 2: Numéro de téléphone mobile
    puts("Entrez un numéro de téléphone mobile: ");
    fgets(numero, sizeof(numero), stdin);

    numero[strcspn(numero, "\n")] = '\0';
    // Vérification du numéro de téléphone mobile
    // if (strlen(numero) != 14 || (numero[0] != '(' && numero[1] != '+' && numero[2] != '2' && numero[3] != '2' && numero[4] != '1' && numero[5] != ')'))
    // {
    //     printf("Erreur: Le numéro de téléphone mobile doit commencer par +221 .\n");
    //     // return 1;
    // }
    if (strlen(numero) != 13 || strlen(numero) != 14)
    {
        printf("Numéro de téléphone incoreccte");
    }
    if (strncmp(numero, "(+221)", 6) != 0 && strncmp(numero, "00221", 5) != 0)
    {
        printf("Erreur: Le numéro de téléphone mobile doit commencer par +221 .\n");
    }

    if (strncmp(numero, "(+221)", 6) != 0)
    {
        for (int i = 6; i < 14; i++)
        {
            if (numero[i] < '0' || numero[i] > '9')
            {
                printf("Erreur: Le numéro de téléphone mobile ne doit pas contenir de caractères autres que des chiffres.\n");
                return 1;
            }
        }
    }
    if (strncmp(numero, "00221", 5) != 0)
    {
        for (int i = 5; i < 13; i++)
        {
            if (numero[i] < '0' || numero[i] > '9')
            {
                printf("Erreur: Le numéro de téléphone mobile ne doit pas contenir de caractères autres que des chiffres.\n");
                return 1;
            }
        }
    }

    // Vérification de l'opérateur
    if (numero[6] == '7' && numero[7] == '7')
    {
        printf("L'opérateur est Orange.\n");
    }
    else if (numero[6] == '7' && numero[7] == '6')
    {
        printf("L'opérateur est Gratuit.\n");
    }
    else if (numero[6] == '7' && numero[7] == '0')
    {
        printf("L'opérateur est Expresso.\n");
    }
    else if (numero[6] == '7' && numero[7] == '8')
    {
        printf("L'opérateur est Kiréne.\n");
    }
    else
    {
        printf("Erreur: Le numéro de téléphone mobile doit commencer par 77, 76, 78 ou 70 après l'indicateur.\n");
        return 1;
    }

    printf("Le numéro de téléphone mobile est: %s\n", numero);
    return 0;
}