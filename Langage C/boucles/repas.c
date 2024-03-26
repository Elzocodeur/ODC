#include <stdio.h>
#include <limits.h>

int main()
{
    retour:;
    int choix, continuer = 1;
    float min = 20, max = 0;
    float note;
    int nb_a_saisir;

    while (continuer)
    {

        printf("\n*** MENU ***");
        printf("\n1. Min et max");
        printf("\n2. Deux plus petites");
        printf("\n3. Moyenne");
        printf("\n4. Deux plus grandes");
        printf("\n5. Quitter   ");

        do
        {
            printf("\nVotre choix est: ");
            scanf("%d", &choix);

        } while (choix < 1 || choix > 5);

        // ************choix1   *************************
        if (choix == 1)
        {

            do
            {
                printf("\nDonner une série de notes . \n");
                scanf("%f", &note);

                if (note < 0)
                {
                    break;
                }
                if (note > 20)
                {
                    max == note <= 20;
                    puts("note invalide");
                    continue;
                }

                if (note < min)
                {
                    min = note;
                }
                if (note > max)
                {
                    max = note;
                }

            } while (1);

            printf("\nMin: %.f", min);
            printf("\nMax: %.f", max);
        }

        // *********************choix2**********************************************
        float min1 = 20, min2 = 20, tmp;
        if (choix == 2)
        {

            do
            {
                printf("\nDonner une série de notes . \n");
                scanf("%f", &note);

                if (note < 0)
                {
                    break;
                }

                if (note > 20)
                {
                    puts("note invalide");
                }
                if (min2 > note)
                {
                    min2 = note;

                    if (min2 < min1)
                    {
                        tmp = min1;
                        min1 = min2;
                        min2 = tmp;
                    }
                }

            } while (1);

            printf("\nMin1: %.f", min1);
            printf("\nMin2: %.f", min2);
        }

        // $$$$$$$$$$$$$$$$$$$$$*  choix3   $$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$
        if (choix == 3)
        {
            int nb_notes = 0;
            float somme = 0;
            float moyenne;

            do
            {

                printf("Entrez le nombre de notes à saisir (max 20) : ");
                scanf("%d", &nb_a_saisir);

            } while (nb_a_saisir <= 0 || nb_a_saisir > 20);

            for (; nb_notes < nb_a_saisir;)
            {

                printf("Note %d : ", nb_notes + 1);
                scanf("%f", &note);

                if (note >= 0 && note <= 20)
                {
                    somme += note;
                    nb_notes++;
                }
                else
                {
                    printf("Note invalide\n");
                }
            }

            char rep;
            do
            {

                printf("Voulez-vous continuer la saisie ? (O/N) ");
                scanf(" %c", &rep);

                if (rep == 'O')
                {

                    int autres_notes = 0;
                    float autres_somme = 0;

                    while (autres_notes < 5)
                    {
                        printf("Autre note : ");
                        scanf("%f", &note);

                        if (note >= 0 && note <= 20)
                        {
                            autres_somme += note;
                            autres_notes++;
                        }
                    }

                    nb_notes += autres_notes;
                    somme += autres_somme;
                }

            } while (rep == 'O');

            moyenne = somme / nb_notes;

            printf("Moyenne = %.2f\n", moyenne);
        }

        //  $$$$$$$$$$$$$$$$  choix4      $$$$$$$$$$$$$$$$$$$$

        if (choix == 4)
        {

            int sousChoix;

            printf("SOUS MENU\n");
            printf("1. Arret par note < 0\n");
            printf("2. Arret par nombre de notes\n");
            printf("3. Arret par reponse O/N\n");

            printf("Choix : ");
            scanf("%d", &sousChoix);

            if (sousChoix == 1)
            {
                do
                {
                    printf("\nDonner une série de notes . \n");
                    scanf("%f", &note);

                    if (note < 0)
                    {
                        break;
                    }
                    if (note > 20)
                    {
                        max == note <= 20;
                        puts("note invalide");
                        continue;
                    }

                    if (note < min)
                    {
                        min = note;
                    }
                    if (note > max)
                    {
                        max = note;
                    }

                } while (1);

                printf("\nMin: %.f", min);
                printf("\nMax: %.f", max);
                goto retour;
            }

            else if (sousChoix == 2)
            {
                // Option 2 : arrêt après n notes
                // Demander le nb de notes
                // Boucle de lecture de notes jusqu'à atteindre ce nombre
                // Possibilité de poursuivre la saisie
            }
            else
            {

                // Option 3 : arrêt par réponse O/N
                // Boucle infinie de saisie de notes
                // Demander à chaque tour si continuer
                // Arrêter si
            }
        }

        if (choix == 5)
        {
            continuer = 0;
        }
    }

    return 0;
}