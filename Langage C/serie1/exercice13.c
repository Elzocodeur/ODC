#include <stdio.h>
int main(){
    int bits;
    float octets, kiloOctets, megaOctets, gigaOctets;

  // Demande du nombre de bits
    printf("Entrez le nombre de bits: ");
    scanf("%d", &bits);

  // Conversion en octets
    octets = bits / 8;

  // Conversion en kilo-octets
    kiloOctets = octets / 1024;

  // Conversion en méga-octets
    megaOctets = kiloOctets / 1024;

  // Conversion en giga-octets
    gigaOctets = megaOctets / 1024;

  // Affichage des résultats
    printf("%d bits correspondent à:\n", bits);
    printf("%f octets\n", octets);
    printf("%f kilo-octets\n", kiloOctets);
    printf("%f méga-octets\n", megaOctets);
    printf("%f giga-octets\n", gigaOctets);

    return 0;
}
