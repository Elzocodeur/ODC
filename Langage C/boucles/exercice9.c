#include <stdio.h>

int main()
{

    int N, nombre, dernier, compteur, maxCompteur;
    int debutSequence, position;

    // Saisir N entre 10 et 50
    do
    {
        printf("Entrez N (entre 10 et 50) : ");
        scanf("%d", &N);
    } while (N < 10 || N > 50);

    // Initialisations
    compteur = 1;
    maxCompteur = 0;

    // Saisir le premier nombre
    printf("Entrez un nombre entre 1 et 100 : ");
    scanf("%d", &dernier);

    for (int i = 2; i <= N; i++)
    {

        printf("Entrez un nombre entre 1 et 100 : ");
        scanf("%d", &nombre);

        // Vérifier si nombre plus grand que dernier
        if (nombre > dernier)
        {
            compteur++;
        }
        else
        {
            compteur = 1; // Réinitialiser le compteur
        }

        // Mise à jour du max
        if (compteur > maxCompteur)
        {
            maxCompteur = compteur;
            debutSequence = i - compteur + 1;
        }

        dernier = nombre; // Mémoriser le dernier
    }

    position = debutSequence;

    // Afficher le résultat
    printf("La plus longue sequence a %d nombres. \n", maxCompteur);
    printf("Elle commence a la position %d.\n", position);

    return 0;
}