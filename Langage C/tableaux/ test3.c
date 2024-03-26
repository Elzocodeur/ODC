#include <stdio.h>

int main()
{
    int tableau1[100], tableau2[100], taille1, taille2, choix, sous_choix;

    do
    {
        printf("Menu principal:\n1. Saisie des tableaux\n2. Transfert\n3. Quitter\nVotre choix: ");
        scanf("%d", &choix);

        if (choix == 1)
        {
            taille1 = 0;
            taille2 = 0;

            do
            {
                printf("Saisissez un element pour le tableau 1: ");
                scanf("%d", &tableau1[taille1]);

                // Vérification qu'il n'y a pas de doublon
                for (int i = 0; i < taille1; i++)
                {
                    if (tableau1[taille1] == tableau1[i])
                    {
                        printf("Doublon dans le tableau 1, saisie annulée\n");
                        return 0; // Arrêt du programme
                    }
                }

                taille1++;
            } while (taille1 < 5);

            do
            {
                printf("Saisissez un element pour le tableau 2: ");
                scanf("%d", &tableau2[taille2]);

                // Vérification qu'il n'y a pas de doublon
                for (int i = 0; i < taille2; i++)
                {
                    if (tableau2[taille2] == tableau2[i])
                    {
                        printf("Doublon dans le tableau 2, saisie annulée\n");
                        return 0; // Arrêt du programme
                    }
                }

                taille2++;
            } while (taille2 < 5);

            printf("1. Afficher par ordre croissant\n");
            printf("2. Afficher par ordre décroissant\n");
            printf("3. Afficher sans tri\n");
            scanf("%d", &sous_choix);

            if (sous_choix == 1)
            {
                // Affichage par ordre croissant
                for (int i = 0; i < taille1; i++)
                {
                    for (int j = i + 1; j < taille1; j++)
                    {
                        if (tableau1[i] > tableau1[j])
                        {
                            int temp = tableau1[i];
                            tableau1[i] = tableau1[j];
                            tableau1[j] = temp;
                        }
                    }
                }

                for (int i = 0; i < taille2; i++)
                {
                    for (int j = i + 1; j < taille2; j++)
                    {
                        if (tableau2[i] > tableau2[j])
                        {
                            int temp = tableau2[i];
                            tableau2[i] = tableau2[j];
                            tableau2[j] = temp;
                        }
                    }
                }

                printf("Tableau 1 trié par ordre croissant: ");
                for (int i = 0; i < taille1; i++)
                {
                    printf("%d ", tableau1[i]);
                }
                printf("\n");

                printf("Tableau 2 trié par ordre croissant: ");
                for (int i = 0; i < taille2; i++)
                {
                    printf("%d ", tableau2[i]);
                }
                printf("\n");
            }
            else if (sous_choix == 2)
            {
                // Affichage par ordre décroissant
                for (int i = 0; i < taille1; i++)
                {
                    for (int j = i + 1; j < taille1; j++)
                    {
                        if (tableau1[i] < tableau1[j])
                        {
                            int temp = tableau1[i];
                            tableau1[i] = tableau1[j];
                            tableau1[j] = temp;
                        }
                    }
                }

                for (int i = 0; i < taille2; i++)
                {
                    for (int j = i + 1; j < taille2; j++)
                    {
                        if (tableau2[i] < tableau2[j])
                        {
                            int temp = tableau2[i];
                            tableau2[i] = tableau2[j];
                            tableau2[j] = temp;
                        }
                    }
                }

                printf("Tableau 1 trié par ordre décroissant: ");
                for (int i = 0; i < taille1; i++)
                {
                    printf("%d ", tableau1[i]);
                }
                printf("\n");

                printf("Tableau 2 trié par ordre décroissant: ");
                for (int i = 0; i < taille2; i++)
                {
                    printf("%d ", tableau2[i]);
                }
                printf("\n");
            }
            else
            {
                // Affichage sans tri
                printf("Tableau 1 non trié: ");
                for (int i = 0; i < taille1; i++)
                {
                    printf("%d ", tableau1[i]);
                }
                printf("\n");

                printf("Tableau 2 non trié: ");
                for (int i = 0; i < taille2; i++)
                {
                    printf("%d ", tableau2[i]);
                }
                printf("\n");
            }
        }
        else if (choix == 2)
        {

            printf("1. Fusion croissante\n");
            printf("2. Intersection\n");
            printf("3. Différence\n");
            scanf("%d", &sous_choix);

            if (sous_choix == 1)
            {
                // Fusion croissante
                int tailleFusion = taille1 + taille2;
                int tableauFusion[tailleFusion];

                int i1 = 0, i2 = 0, iFusion = 0;

                while (i1 < taille1 && i2 < taille2)
                {
                    if (tableau1[i1] < tableau2[i2])
                    {
                        tableauFusion[iFusion] = tableau1[i1];
                        i1++;
                    }
                    else
                    {
                        tableauFusion[iFusion] = tableau2[i2];
                        i2++;
                    }
                    iFusion++;
                }

                while (i1 < taille1)
                {
                    tableauFusion[iFusion] = tableau1[i1];
                    i1++;
                    iFusion++;
                }

                while (i2 < taille2)
                {
                    tableauFusion[iFusion] = tableau2[i2];
                    i2++;
                    iFusion++;
                }

                // Suppression des doublons
                int j = 0;
                for (int i = 0; i < tailleFusion; i++)
                {
                    if (i == 0 || tableauFusion[i] != tableauFusion[i - 1])
                    {
                        tableauFusion[j] = tableauFusion[i];
                        j++;
                    }
                }

                tailleFusion = j;

                printf("Tableau fusionné trié par ordre croissant: ");
                for (int i = 0; i < tailleFusion; i++)
                {
                    printf("%d ", tableauFusion[i]);
                }
                printf("\n");
            }
            else if (sous_choix == 2)
            {
                // Intersection
                int tailleIntersection = 0;
                int tableauIntersection[100];

                for (int i = 0; i < taille1; i++)
                {
                    for (int j = 0; j < taille2; j++)
                    {
                        if (tableau1[i] == tableau2[j])
                        {
                            tableauIntersection[tailleIntersection] = tableau1[i];
                            tailleIntersection++;
                        }
                    }
                }

                // Suppression des doublons
                int j = 0;
                for (int i = 0; i < tailleIntersection; i++)
                {
                    if (i == 0 || tableauIntersection[i] != tableauIntersection[i - 1])
                    {
                        tableauIntersection[j] = tableauIntersection[i];
                        j++;
                    }
                }

                tailleIntersection = j;

                printf("Tableau intersection: ");
                for (int i = 0; i < tailleIntersection; i++)
                {
                    printf("%d ", tableauIntersection[i]);
                }
                printf("\n");
            }
            else
            {
                // Différence
                int tailleDifference1 = 0;
                int tableauDifference1[100];

                for (int i = 0; i < taille1; i++)
                {
                    int trouve = 0;
                    for (int j = 0; j < taille2; j++)
                    {
                        if (tableau1[i] == tableau2[j])
                        {
                            trouve = 1;
                            break;
                        }
                    }

                    if (!trouve)
                    {
                        tableauDifference1[tailleDifference1] = tableau1[i];
                        tailleDifference1++;
                    }
                }

                int tailleDifference2 = 0;
                int tableauDifference2[100];

                for (int i = 0; i < taille2; i++)
                {
                    int trouve = 0;
                    for (int j = 0; j < taille1; j++)
                    {
                        if (tableau2[i] == tableau1[j])
                        {
                            trouve = 1;
                            break;
                        }
                    }

                    if (!trouve)
                    {
                        tableauDifference2[tailleDifference2] = tableau2[i];
                        tailleDifference2++;
                    }
                }

                // Suppression des doublons
                int j = 0;
                for (int i = 0; i < tailleDifference1; i++)
                {
                    if (i == 0 || tableauDifference1[i] != tableauDifference1[i - 1])
                    {
                        tableauDifference1[j] = tableauDifference1[i];
                        j++;
                    }
                }

                tailleDifference1 = j;

                j = 0;
                for (int i = 0; i < tailleDifference2; i++)
                {
                    if (i == 0 || tableauDifference2[i] != tableauDifference2[i - 1])
                    {
                        tableauDifference2[j] = tableauDifference2[i];
                        j++;
                    }
                }

                tailleDifference2 = j;

                printf("Tableau différence 1 (T1 - T2): ");
                for (int i = 0; i < tailleDifference1; i++)
                {
                    printf("%d ", tableauDifference1[i]);
                }
                printf("\n");

                printf("Tableau différence 2 (T2 - T1): ");
                for (int i = 0; i < tailleDifference2; i++)
                {
                    printf("%d ", tableauDifference2[i]);
                }
                printf("\n");
            }
        }
        else if (choix == 3)
        {
            return 0;
        }

    } while (choix != 3);

    return 0;
}
