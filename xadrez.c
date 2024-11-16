#include <stdio.h>
int main() {
int torre = 0;
    int rainha = 0;
    int bispo = 0;

    printf("Movimentação da torre\n");
    while (torre <= 5) {
        
        printf("Direita\n");
        torre++;
    }

    printf("Movimentção do bispo\n");
    while(bispo <= 5) {
        printf("Direita, acima\n");
        bispo++;
    }

    printf("Movimentação da rainha\n");
    while( rainha <= 8) {
        printf("Esquerda\n");
        rainha++;
    }




    return 0;
}
