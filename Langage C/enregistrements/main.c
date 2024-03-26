#include <stdio.h>
#include <string.h>

int autoIncrementEtudiantID = 0;
int autoIncrementMatiereID = 0;
int tailleMatiere = 10;

/// DEFINITION DES STRUCT ////

typedef struct 
{
    int j;
    int m;
    int a;
}DATE;

typedef struct 
{
    int id;
    char nom[20];
    char prenom[50];
    DATE dn;
}ETUDIANT;

typedef struct 
{
    int id;
    char libelle[20];
    int coef;
}MATIERE;

typedef struct 
{
    int id;
    char libelle[20];
    MATIERE matieres[10];
    ETUDIANT etudiants[100];
    int nbrEtudiant, nbrMatiere;
    // enum niveau{L1 = 1, L2, L3, M1, M2};
}CLASSE;

typedef struct 
{
    ETUDIANT etudiant;
    MATIERE matiere;
    float note;
    // enum type{EV = 1, EX};
}EVALUATION;

/// DEFINITION DES PROTOTYPES ///

DATE saisirDate(void);
void afficherDate(DATE);
ETUDIANT saisirEtudiant(void);
void afficherEtudiant(ETUDIANT);
MATIERE saisirMatiere(void);
void afficherMatiere(MATIERE);
void remplirTabMatiere(MATIERE tabMatiere[], int tailleMatiere);
void afficherTabMatiere(MATIERE tabMatiere[], int tailleMatiere);

// FONCTION MAIN //

int main(){
  MATIERE tabMatiere[10];

    // afficherDate(saisirDate());
    // afficherEtudiant(saisirEtudiant());
    afficherMatiere(saisirMatiere());
    // remplirTabMatiere(tabMatiere,tailleMatiere);
    // afficherTabMatiere(tabMatiere,tailleMatiere);
    return 0;
}

// IMPLEMENTATION DES FONCTIONS //


DATE saisirDate(void){
    DATE d;
    do
    {
    
        printf("Entrer une date(j m a)\n");
        scanf("%d %d %d", &d.j, &d.m, &d.a);

        if (d.j < 1 && d.j > 31 ||  d.m < 1 && d.m > 12 || d.a < 1 && d.a > 2024)
        {
            printf("Entrer une date valide!!\n");
        }
        

    } while (d.j < 1 && d.j > 31 ||  d.m < 1 && d.m > 12 || d.a < 1 && d.a > 2024);

    return d;
}
void afficherDate(DATE date){  // la date est aleatoire
        printf("La date est :\n %d-%d-%d\n", date.j, date.m, date.a);
}

ETUDIANT saisirEtudiant(){
    ETUDIANT e;

    e.id = ++autoIncrementEtudiantID;

    printf("Saisir un etudiant:\n");
    scanf("%d %s %s %d %d %d",&e.id, e.nom, e.prenom, &e.dn.j, &e.dn.m, &e.dn.a);

    return e;
}

void afficherEtudiant(ETUDIANT etud){
    printf("L'etudiant %d:\n NOM & PRENOM: %s %s\n date_naisss: %d-%d-%d\n", etud.id,etud.nom,etud.prenom,etud.dn.j,etud.dn.m,etud.dn.a);
}

MATIERE saisirMatiere(void){
    MATIERE matiere;
    char reponse;

    do
    {
        matiere.id = ++autoIncrementMatiereID;

        printf("Saisir une matiere:\n");
        scanf("%d %s %d",&matiere.id, matiere.libelle, &matiere.coef);

        printf("Voulez-vous resaisir une matiere?:\n");
        scanf("%c", &reponse);
        
    } while (reponse == 'o');
    
    return matiere;
}
void afficherMatiere(MATIERE matier){
    printf("Matiere %d:\nLibelle: %s\nCoef: %d\n", matier.id,matier.libelle,matier.coef);
}

void remplirTabMatiere(MATIERE tabMatiere[], int tailleMatiere){
    for (int i = 0; i < tailleMatiere; i++)
    {
        tabMatiere[i] = saisirMatiere();
    }
}
void afficherTabMatiere(MATIERE tabMatiere[], int tailleMatiere){
    for (int i = 0; i < tailleMatiere; i++)
    {
        afficherMatiere(tabMatiere[i]);
    }   
}
