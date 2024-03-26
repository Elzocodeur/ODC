#include <stdio.h>
#include<string.h>
int autoIdEtudiant = 0;
typedef struct
{
    int j, m, a;

} DATE;

typedef struct
{
    int id;
    char nom[50];
    char prenom[50];
    DATE dn;

} ETUDIANT;

typedef struct
{
    int id;
    char libelle[50];
    int coef;

} MATIERE;

typedef struct
{
    char libelle[50];
    MATIERE matieres[10];
    ETUDIANT etudiants[100];
    int nbrEtudiant;
    int nbrMatiere;
    enum niveau
    {
        L1 = 1,
        L2,
        L3,
        M1,
        M2,
        M3
    };

} CLASSE;

typedef struct
{
    ETUDIANT etudiant;
    MATIERE matiere;
    float note;
    enum type
    {
        DEVOIR,
        EXAMEN
    };

} EVALUATION;
// prototype
void afficherDate(DATE);
DATE saisieDate(void);
int saisirInt(int, int, char[]);
ETUDIANT saisirEtudiant();
void afficheEtudiant(ETUDIANT);
MATIERE saisirMatiere(void);
void afficherMatiere(MATIERE);


int main()
{
    enum jour
    {
        LUNDI = 1,
        MARDI,
        MERCREDI,
        JEUDI,
        VENDREDI,
        SAMEDI,
        DIMANCHE
    };
    enum jour j;
    j = LUNDI;
    // afficherDate(saisieDate());
    saisirEtudiant();

    afficheEtudiant(saisirEtudiant());

    return 0;
}
DATE saisieDate(void)
{
    DATE d;
    puts("Entrez une date [j,m,a]");
    // scanf("%d%d%d", &d.j, &d.m, &d.a);
    d.j = saisirInt(1, 31, "entrez le jour");
    d.m = saisirInt(1, 12, "entrez le mois");
    d.a = saisirInt(1, 2024, "entrez l'année");
    return d;
}
void afficherDate(DATE a)
{
    printf("la date est %d-%d-%d", a.j, a.m, a.a);
}
int saisirInt(int min, int max, char msg[])
{
    int x;
    do
    {
        puts(msg);
        scanf("%d", &x);
    } while (x < min || x > max);

    return x;
}
ETUDIANT saisirEtudiant()
{
    ETUDIANT e;
    e.id = ++autoIdEtudiant;
    puts("Donnez le nom :");
    gets(e.nom);
    puts("Donnez le prénom :");
    gets(e.prenom);
    e.dn = saisieDate();
    return e;
}

void afficheEtudiant(ETUDIANT etu)
{
    puts("Informations de l'étudiant :");
    printf("Identifiant : %d\n", etu.id);
    printf("Nom : %s\n", etu.nom);
    printf("Prénom : %s\n", etu.prenom);
    printf("Date de naissance : %02d/%02d/%04d\n", etu.dn.j, etu.dn.m, etu.dn.a);
}

MATIERE saisirMatiere(void){
    MATIERE M;
    printf("Id Matiére");
    scanf("%d",&M.coef);
    printf("Le  nom de la Matiére");
    scanf("%s",&M.libelle);
    printf("le coefficient");
    scanf("%d",&M.coef);

    return M;
}

void afficherMatiere(MATIERE Mathiere){

}