#include <stdio.h>

int main () {

    int b = 0;
    int r = 0;

//. movimentação da torre no tabuleiro.
    printf("\n");
    printf("Torre. \n ");
    for (int t = 0; t < 5; t++) {
        printf("Direita . ");
    }

//. movimentação do bispo no tabuleiro
    printf("\n");
    printf("\n");
    printf("Bispo.\n");
    while(b < 5){
        printf("Cima, Direita . ");
        b++;
    }

//. movimentação da rainha no tabuleiro
    printf("\n");
    printf("\n");
    printf("Rainha. \n");
    do {
        printf("Esquerda . ");
        r++;
    } while (r < 8);

//. fim do programa.
    return 0;
}
