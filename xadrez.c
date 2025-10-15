#include <stdio.h>

void torremov (int casa){
    if (casa > 0) {
    printf("Direita\n");
    torremov (casa - 1);
    }
}

void bispomov (int casa, int casa2) {
    for (casa; casa > 0; casa--) {
        while (casa2 > 0){
        printf("Direita\n");
        casa2--;
        }
        printf("Cima\n");
        };
    }

void rainhamov (int casa){
    if (casa > 0) {
    printf("Esquerda\n");
    rainhamov (casa - 1);
    }
}

int main() {

    printf("Movimentos torre\n");
    
    torremov (5);

    printf("\n");
    printf("Movimentos bispo\n");

    bispomov (5,5);

    printf("\n");
    printf("Movimentos rainha\n");

    rainhamov (8);

    printf("\n");
    printf("Movimentos cavalo\n");

    for (int direita = 1; direita > 0; direita--){
        for (int cima = 2; cima > 0; cima--){
            printf("Cima\n");
        }
    printf("Direita\n");
   } 
    return 0;
}
