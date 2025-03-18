#include <stdio.h>

//. setado a movimentação torre
void torre(int casas){
    if (casas > 0) {
        printf("Direitra . ");
        torre (casas - 1);
    }
}
//. setado a movimentação bispo
void bispo(int casas){
    if (casas > 0) {
        printf("Cima, Direita . ");
        bispo (casas - 1);
    }
}
//. setado a movimentação rainha
void rainha(int casas){
    if (casas > 0) {
        printf("Esquerda . ");
        rainha (casas - 1);
    }
}
//. setado a movimentação do cavalo para cima
void cavaloc(int casasc){
    if (casasc > 0) {
        printf("Cima . ");
        cavaloc(casasc - 1);
    }
}
//. setado a movimentação do cavalo para a direita
void cavalod(int casasd){
    if (casasd > 0){
        printf("Direita . ");
        cavalod(casasd - 1);
    }
}

int main () {

//. movimentação da torre no tabuleiro.
    printf("\n");
    printf("Torre. \n ");
    torre(5);
    printf("\n");

//. movimentação do bispo no tabuleiro
    printf("\n");
    printf("Bispo.\n");
    bispo(5);
    printf("\n");

//. movimentação da rainha no tabuleiro
    printf("\n");
    printf("Rainha. \n");
    rainha(8);
    printf("\n");

    //. movimentação do cavalo
    printf("\n");
    printf("Cavalo. \n");
    cavaloc (2);
    cavalod (1);
    
    
//. fim do programa.
    return 0;
}