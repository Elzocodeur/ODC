#include <stdio.h>
int main(){

		int a, b;
		float ratio;

		// calcul des deux entiers
		printf("entrez le  premier nombre: ");
		 scanf("%d",&a);
		 
		printf("entrez le  deuxiéme nombre: ");
		 scanf("%d",&b);
		 
		 // calcul du quotient en entier
		 int quotient = a/b;
		 
		 //calcul de la division
		 int reste = a%b;
		 
		 //calcul du ratio (quotient réel)
		  ratio =  (float) a/b;
		
		//affichage du résultat
		printf(" Le quotient entier  est:%d\n",quotient);
		printf(" Le rest de la division   est:%d\n",reste);
		printf(" Le ratio  quotient réel est: %f\n",ratio);
		printf(" Le modulo  est:%d\n",a%b);
	return 0;
 }
