	/* Exercice 4 : Écrire un algorithme permettant de résoudre une équation du second degré. 
	ax2 + bx + c = 0 */
	#include <stdio.h>
	#include <math.h>
	int main() {
	float a,b,c,delta,x1,x2,x0;
	printf("veuillez saisir les 3 coefficients de votre equation \n");
	scanf("%f %f %f", &a,&b,&c);
	if (a == 0) {
	if (b !=0) {
	float sepd= -c/b;
	printf(" la solution vaut : %f\n",sepd);
	}
	else
	if ((b == 0) && (c !=0))
	{
	printf("cette equation est impossible");
	}
	else
	{
	float sepd= 0;
	printf(" la solution vaut : %f\n une équation toujours vrai ",sepd);
	}
	}
	else
	{
	delta = (pow(b,2)-(4*a*c));
	if (delta ==0) {
	x0= -b/(2*a);
	printf("  on a une solution solution  valant : %f\n",x0);
	}
	else
	if (delta>0)  {
	 x1= (-b + sqrt(delta))/(2*a);
	 x2= (b + sqrt(delta))/(2*a);
	 printf("  on a deux solutions  qui valent : %f\n et %f\n",x1,x2);
	 }
	 else
	 {
	 printf(" pas de solution car delta négatif");
	 }
	 }
	 return 0;
	 }
	 
	 

