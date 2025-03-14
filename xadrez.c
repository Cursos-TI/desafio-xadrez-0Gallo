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

    //. movimentação do cavalo
    printf("\n");
    printf("\n");
    printf("Cavalo. \n");

    for (int ce = 0; ce < 1; ce++){
        for (int cb = 0; cb < 2; cb++){
            printf("Baixo . ");
        }
        printf("Esquerda . ");
    }
//. fim do programa.
    return 0;
}