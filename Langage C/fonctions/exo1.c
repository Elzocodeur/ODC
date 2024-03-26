#include <stdio.h>
int est_bissextile(int);//fonction qui verifie si une annee est bissectile
int saisie_annee(void); //une qui saisie une annee sans parametre
void saisie_annee1(); // procedure sa*isie annee1
void est_bissextile1(); // procedure est_bissectile


// procedure
    void  saisie_annee1(void) {

        int annee;
        
        do {
            printf("Saisissez une annee : ");
            scanf("%d", &annee);
        } while (annee < 0);
    

    }

void est_bissextile1(int)
{
    int annee;
    if ((annee % 4 == 0) || (annee % 100 != 0) && (annee % 400 == 0))
    {
        printf("%d est une année bissectile",annee);
    }
    else
    {
        printf("%d n'est une année bissectile",annee);
        
    }
}



int main()
{
    int annee;


    annee = saisie_annee();
    if (est_bissextile(annee))
    {
        printf("%d est une année bissectile", annee);
    }
    else
    {
        printf("%d n'est pa une année bissectile", annee);
    }

    return 0;
}


// fonctions
int saisie_annee(void)
{
    int annee;
    do
    {
        printf("Saisissez une annee : ");
        scanf("%d", &annee);

    } while (annee < 0);

    return annee;
}

// verifie si une annee est bissectile fonction

int est_bissextile(int)
{
    int annee;
    if ((annee % 4 == 0) || (annee % 100 != 0) && (annee % 400 == 0))
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
