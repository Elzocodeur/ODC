#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    int id;
    char nom[50];
    double prix_unitaire;
    double quantite;
} Produit;

int main() {
    
    int choix;
    Produit produit;
    double min_prix_unitaire = 0;
    double max_valeur = 0;
    
    do {
        printf("1. Saisir un produit\n"); 
        printf("2. Saisir une serie de produits\n");
        printf("3. Quitter\n");
        printf("Votre choix : ");
        scanf("%d", &choix);
        
        if(choix == 1) {
            
            printf("Voulez-vous saisir un produit ? ");
            char rep[10];
            scanf("%s", rep);
            
            while(strcmp(rep, "oui") == 0) {
                
                printf("ID : ");
                if(scanf("%d", &produit.id) != 1) {
                    printf("ID incorrect, recommencez\n");
                    scanf("%*[^\n]"); scanf("%*c");
                    continue;
                }
                
                printf("Nom : ");
                if(scanf("%s", produit.nom) != 1) {
                    printf("Nom incorrect, recommencez\n");
                    scanf("%*[^\n]"); scanf("%*c"); 
                    continue;
                }   
                
                printf("Prix unitaire : ");
                if(scanf("%lf", &produit.prix_unitaire) != 1 || produit.prix_unitaire < 0) {
                    printf("Prix unitaire incorrect, recommencez\n");
                    scanf("%*[^\n]"); scanf("%*c");
                    continue;
                }
                
                if(produit.id == 1 || produit.prix_unitaire < min_prix_unitaire) {
                    min_prix_unitaire = produit.prix_unitaire;
                }
                
                printf("Quantite : ");
                if(scanf("%lf", &produit.quantite) != 1 || produit.quantite < 0) {
                    printf("Quantite incorrecte, recommencez\n");
                    scanf("%*[^\n]"); scanf("%*c");
                    continue; 
                }
                
                printf("Voulez-vous saisir un autre produit ? ");
                scanf("%s", rep);
            }
            
            printf("Produit ayant le prix unitaire le plus petit : \n");
            printf("ID = %d\n", produit.id);
            printf("Nom = %s\n", produit.nom); 
            printf("Prix unitaire = %.2lf\n", min_prix_unitaire);
            
        }
        else if(choix == 2) {
            
            double valeur;
            
            do {
            
                printf("ID : ");
                if(scanf("%d", &produit.id) != 1) {
                    printf("ID incorrect, arrêt de la saisie\n");
                    break;
                }
                
                printf("Nom : ");
                if(scanf("%s", produit.nom) != 1) {
                    printf("Nom incorrect, arrêt de la saisie\n");
                    break;
                }
                
                printf("Prix unitaire : ");
                if(scanf("%lf", &produit.prix_unitaire) != 1 || produit.prix_unitaire < 0) {
                    printf("Prix unitaire incorrect, arrêt de la saisie\n");
                    break;
                }
                
                printf("Quantite : ");
                if(scanf("%lf", &produit.quantite) != 1 || produit.quantite < 0) {
                    printf("Quantite incorrecte, arrêt de la saisie\n");
                    break;
                }
                
                valeur = produit.prix_unitaire * produit.quantite;
                
                if(valeur > max_valeur) {
                    max_valeur = valeur;
                }
                
            } while(produit.prix_unitaire >= 0 && produit.quantite >= 0);
            
            printf("Produit dont prix_unitaire * quantite est maximum : %.2lf\n", max_valeur);
            
        }
        else if(choix != 3){
            printf("Choix incorrect\n");
        }
        
    } while(choix != 3);
    
    printf("Fin du programme\n");
    
    return 0;
}