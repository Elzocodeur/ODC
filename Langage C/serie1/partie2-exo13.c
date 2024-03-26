# include <stdio.h>

int  main (){
    int jours, mois, annee;

    printf("entrer le jour :");
    scanf("%d", &jours);

    printf("entrer le mois :");
    scanf("%d", &mois);

    printf("entrer l'annee :");
    scanf("%d", &annee);

    //verification de la date s'il est valide
    if (jours < 1 || jours > 31 || mois < 1 || mois >12);
    {
        printf("Date que vous avez entrez n'est pas valide");

        return 1 ;// quitte le programme avec un code d'erreur
    }

    //verifier si l'annee est bissextille

    int estBissextille = (annee % 4 ==0 && annee % 100 !=0) ||(annee % 400 == 0);

    //verification de la validité du jour en fonction le mois

    int joursDansMois;

        switch (mois)
        {
        case 2:
                joursDansMois = (estBissextille)? 29:28;
            break;
        case 4:
        case 6:
        case 9:
        case 11:
            joursDansMois = 30;
        default:
            joursDansMois = 31;
        break;

        }
// verifier si le 
    if (jours<1 || jours > joursDansMois)
    {
        printf("le jour que vous avez enter n'est pas valide ! merci  de saisir à nouveau");
        return 1 ;// quitte le programme avec un code d'erreur
    }

    //calculer de la date suivante
    jours++;
    if (jours > joursDansMois)
    {
        jours = 1;
        mois++;
        if (mois > 12)
        {
            mois = 1;
            annee++;
        }

        //affichage de la date suivante
        printf("La date suivante est : %d %d %d",jours, mois, annee);
        
    }
    
    
    
    return 0;

}