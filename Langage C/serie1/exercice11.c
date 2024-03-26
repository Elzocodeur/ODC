#include <stdio.h>

int main() {
  char libelle[50];
  float quantiteStock, prixUnitaire, montantStock, montantTTC, tva = 0.18;

  // Demande des informations du produit
  printf("Entrez le libellé du produit: ");
  scanf("%s", libelle);
  printf("Entrez la quantité en stock: ");
  scanf("%f", &quantiteStock);
  printf("Entrez le prix unitaire: ");
  scanf("%f", &prixUnitaire);

  // Calcul du montant en stock
  montantStock = quantiteStock * prixUnitaire;

  // Calcul du montant TTC
  montantTTC = montantStock * (1 + tva);

  // Affichage des informations du produit
  printf("\nLibellé: %s\n", libelle);
  printf("Quantité en stock: %f\n", quantiteStock);
  printf("Prix unitaire: %f\n", prixUnitaire);

  // Affichage des montants
  printf("Montant en stock: %f\n", montantStock);
  printf("Montant TTC: %f\n", montantTTC);

 return 0;
}
