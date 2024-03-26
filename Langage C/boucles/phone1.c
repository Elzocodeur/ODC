#include <stdio.h>
#include <string.h>

int main()
{

    int choix;
    char numero[20];

    do
    {

        printf("Menu\n");
        printf("1. Correction du numero\n");
        printf("2. Numero mobile\n");
        printf("3. Quitter\n");

        printf("Votre choix : ");
        scanf("%d", &choix);

        if (choix == 1)
        {

            // Numéro fixe
            printf("Entrez un numero fixe : ");
            scanf("%s", numero);

            if (strlen(numero) != 9 || numero[0] != '3' || numero[1] != '3')
            {
                printf("Erreur format numero fixe\n");
                continue;
            }

            for (int i = 0; i < 9; i++)
            {
                if (numero[i] < '0' || numero[i] > '9')
                {
                    printf("Erreur: caracteres interdits\n");
                    continue;
                }
            }

            printf("Numero fixe valide\n");
        }
        else if (choix == 2)
        {

            // Numéro mobile
            // printf("Entrez un numero mobile : ");
            // scanf("%s", numero);

            // if (strlen(numero) != 19 || (numero[0] != '(' && numero[1] != '+' && numero[2] != '2'
            //     && numero[3] != '2' && numero[4] != '1' && numero[5] != ')' && numero[6] != ' ' && numero[9] != ' '
            //     && numero[13] != ' ' && numero[16] != ' ')
            //     || (numero[0] != '0' && numero[1] != '0'))
            // {
            //     printf("Erreur format numero mobile\n");
            //     continue;
            // }

            // for (int i = 7; i < 20; i++)
            // {
            //     if (numero[i] < '0' || numero[i] > '9')
            //     {
            //         printf("Erreur: caracteres interdits\n");
            //         continue;
            //     }
            // }

            puts("Entrez un numéro de téléphone mobile: ");
            fgets(numero, sizeof(numero), stdin);

            numero[strcspn(numero, "\n")] = '\0';

            if (strlen(numero) != 16 || strlen(numero) != 19)
            {
                printf("Numéro de téléphone incoreccte");
            }
            if (strncmp(numero, "(+221)", 8) != 0 && strncmp(numero, "00221", 7) != 0)
            {
                printf("Erreur: Le numéro de téléphone mobile doit commencer par +221 .\n");
            }

            if (strncmp(numero, "(+221)", 8) != 0)
            {
                for (int i = 8; i < 20; i++)
                {
                    if (numero[i] < '0' || numero[i] > '9')
                    {
                        printf("Erreur: Le numéro de téléphone mobile ne doit pas contenir de caractères autres que des chiffres.\n");
                        return 1;
                    }
                }
            }
            if (strncmp(numero, "00221", 7) != 0)
            {
                for (int i = 7; i < 16; i++)
                {
                    if (numero[i] < '0' || numero[i] > '9')
                    {
                        printf("Erreur: Le numéro de téléphone mobile ne doit pas contenir de caractères autres que des chiffres.\n");
                        return 1;
                    }
                }
            }

            // Verification opérateur
            if (numero[5] == '7' && numero[6] == '7')
            {
                printf("Orange\n");
            }
            else if (numero[5] == '7' && numero[6] == '6')
            {
                printf("Free\n");
            }
            else if (numero[5] == '7' && numero[6] == '0')
            {
                printf("Expresso\n");
            }
            else if (numero[5] == '7' && numero[6] == '8')
            {
                printf("Kirene\n");
            }
            else
            {
                printf("Erreur operateur\n");
                continue;
            }

            printf("Numero mobile valide\n");
        }
        else if (choix == 3)
        {
            printf("Au revoir !\n");
            break;
        }
        else
        {
            printf("Choix invalide\n");
        }

    } while (choix != 3);

    return 0;
}