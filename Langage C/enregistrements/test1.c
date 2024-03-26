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
    char prenom[30];
    int age[10];
    Date date_naissance;
}Personne;

Personne saisie()
{
    Personne p;
    scanf("%d %s %s %d  %d %d %d %d", &p.id, p.nom, p.prenom, &p.age, &p.date_naissance.jour, &p.date_naissance.mois, p.date_naissance.annee);

    return p;
}


Personne Affiche(Personne p){
    prentf("id %d \n", p.id);
    prentf("nom %s \n", p.nom);
    prentf("prenom %s \n", p.prenom);
    prentf("age %d \n", p.age);
    prentf("age %d \n", p.date_naissance.jour);
    prentf("age %d \n", p.date_naissance.mois);
    prentf("age %d \n", p.date_naissance.annee);

return p;
}

void saisie(Personne *P){
    scanf("%d %s %s %d %d %d %d",P->id, P->nom, P->prenom, P->date_naissance.jour, P->date_naissance.mois, P->date_naissance.annee);

}

void afficher(Personne p){
    prentf("id %d \n", p.id);
    prentf("nom %s \n", p.nom);
    prentf("prenom %s \n", p.prenom);
    prentf("age %d \n", p.age);
    prentf("age %d \n", p.date_naissance.jour);
    prentf("age %d \n", p.date_naissance.mois);
    prentf("age %d \n", p.date_naissance.annee);
}

void saisieTabpersonne(Personne P[], int n){
    for (int i = 0; i < n; i++)
    {
        P[i] = saisie();
    }
    
}

void afficherTabPersonne(Personne P[], int n){
    for (int i = 0; i < n; i++)
    {
        afficher(P[i]);
    
    }
}
int main()
{
    
    return 0;
}