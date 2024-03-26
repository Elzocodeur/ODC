#ifndef tableaux
#define tableaux

// exercice1 tableaux
    bool elementsConsecutifs(int tab[], int n)
{
    if (n == 0)
        return true;

    int precedent = tab[0];

    for (int i = 1; i < n; i++)
    {
        if (tab[i] != precedent + 1)
        {
            return false;
        }
        precedent = tab[i];
    }

    return true;
}

// exercice2 tableaux
void fusionner(int tab1[], int n1, int tab2[], int n2)
{

    int cpt = 0;
    int i = 0, j = 0;

    while (i < n1 && j < n2)
    {
        if (tab1[i] > tab2[j])
        {
            int temp = tab1[cpt];
            tab1[cpt] = tab2[j];
            tab2[j] = temp;
            cpt++;
            j++;
        }
        else
        {
            cpt++;
            i++;
        }
    }
}


//exercice3

int *inverser_tableau(int *tab, int taille)
{
    int *tab_inverse = malloc(taille * sizeof(int));

    for (int i = 0; i < taille; i++)
    {
        tab_inverse[i] = tab[taille - i - 1];
    }

    return tab_inverse;
}

//exercice4

void additionTab(int tab1[], int tab2[], int resultat[], int n)
{
    for (int i = 0; i < n; i++)
    {
        resultat[i] = tab1[i] + tab2[i];
    }
}

// exercice5
int calculSom(int tab1[], int tab2[], int n1, int n2)
{

    int som = 0;

    for (int i = 0; i < n1; i++)
    {
        for (int j = 0; j < n2; j++)
        {
            som += tab1[i] * tab2[j];
        }
    }

    return som;
}

//exercice7
// Fonction pour insérer x dans le tableau T trié
void insererDansTableauTrie(double T[], int *n, double x)
{
    int i = *n - 1;

    // Trouver la position pour l'insertion
    while (i >= 0 && T[i] > x)
    {
        T[i + 1] = T[i]; // Décaler les éléments vers la droite
        i--;
    }

    // Insérer x à la position trouvée
    T[i + 1] = x;

    // Augmenter la taille du tableau
    (*n)++;
}

//exercice8

// Fonction pour calculer la somme des diviseurs propres d'un nombre
int sommeDiviseurs(int n)
{
    int somme = 0;
    for (int i = 2; i <= n / 2; i++)
    { // On commence à 2 car on exclut 1
        if (n % i == 0)
        {
            somme += i;
        }
    }
    return somme;
}

// Fonction pour tester si deux nombres sont amis
int sontAmis(int m, int n)
{
    return sommeDiviseurs(m) == n && sommeDiviseurs(n) == m;
}

//  exercice9 

// Fonction pour trouver la sous-suite consécutive de valeurs identiques la plus longue
void trouverSousSuiteLaPlusLongue(int arr[], int n, int *position, int *longueur)
{
    int currentLength = 1;
    int maxLength = 1;
    int startPos = 0;

    *position = 0; // Position de début de la sous-suite la plus longue
    *longueur = 1; // Longueur de la sous-suite la plus longue

    for (int i = 1; i < n; i++)
    {
        if (arr[i] == arr[i - 1])
        {
            // Si la valeur actuelle est identique à la précédente, incrémenter la longueur actuelle
            currentLength++;
        }
        else
        {
            // Sinon, réinitialiser la longueur actuelle
            currentLength = 1;
            startPos = i;
        }

        // Si la longueur actuelle est plus grande que la longueur maximale enregistrée, mettre à jour
        if (currentLength > maxLength)
        {
            maxLength = currentLength;
            *position = startPos;
            *longueur = maxLength;
        }
    }
}

// exercice10

// Fonction pour fusionner deux tableaux triés
void fusionnerTableaux(int arr1[], int n1, int arr2[], int n2, int arrFusionne[])
{
    int i = 0, j = 0, k = 0;

    // Fusionner les tableaux jusqu'à ce que l'un soit entièrement parcouru
    while (i < n1 && j < n2)
    {
        if (arr1[i] < arr2[j])
        {
            arrFusionne[k++] = arr1[i++];
        }
        else
        {
            arrFusionne[k++] = arr2[j++];
        }
    }

    // Ajouter les éléments restants du premier tableau, s'il y en a
    while (i < n1)
    {
        arrFusionne[k++] = arr1[i++];
    }

    // Ajouter les éléments restants du deuxième tableau, s'il y en a
    while (j < n2)
    {
        arrFusionne[k++] = arr2[j++];
    }
}

// exercice11

// Fonction pour analyser la matrice binaire
void analyserMatriceBinaire(int matrice[][100], int lignes, int colonnes, int *colonneMaxZero, int *ligneMaxUn, double *pourcentageZero, double *pourcentageUn)
{
    int sommeZeros[100] = {0}; // Tableau pour compter les zéros par colonne
    int sommeUns[100] = {0};   // Tableau pour compter les uns par ligne
    int totalZeros = 0;
    int totalUns = 0;
    *colonneMaxZero = 0;
    *ligneMaxUn = 0;

    // Parcourir la matrice pour compter les zéros et les uns
    for (int i = 0; i < lignes; i++)
    {
        for (int j = 0; j < colonnes; j++)
        {
            if (matrice[i][j] == 0)
            {
                sommeZeros[j]++;
                totalZeros++;
            }
            else
            {
                sommeUns[i]++;
                totalUns++;
            }
        }
    }

    // Trouver la colonne avec le plus de zéros
    for (int j = 1; j < colonnes; j++)
    {
        if (sommeZeros[j] > sommeZeros[*colonneMaxZero])
        {
            *colonneMaxZero = j;
        }
    }

    // Trouver la ligne avec le plus de uns
    for (int i = 1; i < lignes; i++)
    {
        if (sommeUns[i] > sommeUns[*ligneMaxUn])
        {
            *ligneMaxUn = i;
        }
    }

    // Calculer les pourcentages
    int totalElements = lignes * colonnes;
    *pourcentageZero = (double)totalZeros / totalElements * 100.0;
    *pourcentageUn = (double)totalUns / totalElements * 100.0;
}
#endif