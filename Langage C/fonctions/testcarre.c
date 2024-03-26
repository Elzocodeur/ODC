#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int main() {
    int nb1, nb2;
    char rep[3], fig[2], couleur[10];
    
    printf("Saisissez un premier nombre : ");
    scanf("%d", &nb1);
    
    printf("Voulez-vous saisir un second nombre (O/N) ? ");
    scanf("%s", rep);
    
    if (strcmp(rep, "N") == 0) {
        printf("Voulez-vous un carre (C) ou un triangle (T) ? ");
        scanf("%s", fig);

        if (fig[0] == 'T') {
            printf("Triangle rectangle (R) ou isoscele (I) ? ");
            scanf("%s", fig);
    
            char* couleurs[] = {"rouge", "bleu", "vert", "jaune"};
            printf("Choisissez une couleur parmi : ");
            for(int i = 0; i < 4; i++) {
                printf("%s ", couleurs[i]); 
            }
            scanf("%s", couleur);
    
            printf("Voici votre triangle %s de taille %d :\n", couleur, nb1 > 3 ? nb1 : 3);
            
            if (fig[0] == 'R') {
                for(int i = 0; i < nb1; i++)  
                    printf("/\\");
            }
            else if (fig[0] == 'I') {
                for(int i = 0; i < nb1/2; i++)
                    printf("/\\"); 
            }
        }
        else if (fig[0] == 'C') {
            char* couleurs[] = {"rouge", "bleu", "vert", "jaune"};
            printf("Choisissez une couleur parmi : ");
            for(int i = 0; i < 4; i++) {
                printf("%s ", couleurs[i]); 
            } 
            scanf("%s", couleur);
            
            printf("Voici votre carre %s clignotant de taille %d :\n", couleur, nb1);
            
            for(int i = 0; i < 5; i++) {
                for(int j = 0; j < nb1; j++)  
                    printf("/");
                for(int j = 0; j < nb1; j++)
                    printf("\\"); 
                printf("\n");
                sleep(1);              
            }
        }
    }   
    else if (strcmp(rep, "O") == 0) {
        printf("Saisissez le second nombre : ");
        scanf("%d", &nb2);
        
        printf("Voulez-vous un carre C) ou un triangle (T) ? ");
        scanf("%s", fig);        
        
        if (fig[0] == 'C') {
            char* couleurs[] = {"rouge", "bleu", "vert", "jaune"};
            printf("Choisissez une couleur parmi : ");
            for(int i = 0; i < 4; i++) {
                printf("%s ", couleurs[i]); 
            }
            scanf("%s", couleur);
            
            int cote = nb1 < nb2 ? nb1 : nb2;
            
            printf("Voici votre carre %s clignotant de taille %d :\n", couleur, cote);
            
            for(int i = 0; i < 5; i++) {
                for(int j = 0; j < cote; j++)  
                    printf("/");
                for(int j = 0; j < cote; j++)
                    printf("\\");
                printf("\n");
                sleep(1);               
            }
        }
        else if (fig[0] == 'T') {
            printf("Voici votre triangle de taille %d :", nb1);
            for(int i = 0; i < nb1; i++) 
                printf("/\\");  
        }
    }

    return 0;
}