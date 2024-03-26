#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main() {
    int i, j;
    while (1) {
        for (i = 0; i < 10; i++) {
            for (j = 0; j < 10 - i; j++) {
                printf(" ");
            }
            for (j = 0; j < 2 * i + 1; j++) {
                printf("*");
            }
            printf("\n");
        }
        for (i = 9; i >= 0; i--) {
            for (j = 0; j < 10 - i; j++) {
                printf(" ");
            }
            for (j = 0; j < 2 * i + 1; j++) {
                printf("*");
            }
            printf("\n");
        }
        sleep(1);
        system("clear");
    }
    return 0;
}
