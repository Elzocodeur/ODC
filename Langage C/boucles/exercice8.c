#include <stdio.h>

int main()
{

    int nombre_mystere, proposition, compteur = 0;

    // Joueur 1 - choisir un nombre
    printf("Joueur 1, choisissez le nombre mystere : ");
    scanf("%d", &nombre_mystere);

    // Joueur 2 - essayer de deviner
    printf("Joueur 2, devinez le nombre : ");
    scanf("%d", &proposition);

    while (proposition != nombre_mystere)
    {

        compteur++;

        if (proposition < nombre_mystere)
        {
            printf("Trop petit !\n");
        }
        else
        {
            printf("Trop grand !\n");
        }

        printf("Nouvel essai : ");
        scanf("%d", &proposition);
    }

    // Affichage du résultat
    printf("Bravo, vous avez trouve en %d coups !\n", compteur);

    return 0;
}