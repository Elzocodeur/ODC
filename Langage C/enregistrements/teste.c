#include <stdio.h>
#include <string.h>
struct Date
{
    int jour;
    int mois;
    int annee;
};
typedef struct Date Date;

typedef struct
{
    int id;
    char nom[20];
    char prenom[50];
    int age;
    Date date_naissance;
} personne;

personne saisi()
{
    personne p;
    scanf("%d %s %s %d %d %d", &p.id, p.nom, p.prenom, &p.age, &p.date_naissance.jour, &p.date_naissance.mois, &p.date_naissance.annee);
    return p;
}
personne Afficher(personne p)
{
    printf("Id : %d\n", p.id);
    printf("Nom : %s\n", p.nom);
    printf("Prenom : %s\n", p.prenom);
    printf("Age : %d\n", p.age);
    printf("Date de naissance : %d/%d/%d\n", p.date_naissance.jour, p.date_naissance.mois, p.date_naissance.annee);
    return p;
}
void saisie(personne *p)
{
    scanf("%d %s %s %d %d %d", p->id, p->nom, p->prenom, p->age, p->date_naissance.jour, p->date_naissance.mois, p->date_naissance.annee);
}

void afficher(personne p)
{
    printf("%d %s %s %d %d %d\n", p.id, p.nom, p.prenom, p.age, p.date_naissance.jour, p.date_naissance.mois, p.date_naissance.annee);
}
void saisiTabPersonne(personne p[], int n)
{

    for (int i = 0; i < n; i++)
    {
        p[i] = saisi();
    }
}

void afficherTabPersonne(personne p[], int n)
{

    for (int i = 0; i < n; i++)
    {
        afficher(p[i]);
    }
}
int main()
{
    personne p[10];
    p[0].id = 3;
    p[2].age = 12;
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &p[i].age);
        scanf("%s", p[i].nom);
        scanf("%d", &p[i].date_naissance.jour);
    }

    typedef int entier;
    personne p1, p2;

    entier x;

    return 0;

}
