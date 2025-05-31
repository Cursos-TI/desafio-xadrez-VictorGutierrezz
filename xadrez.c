#include <stdio.h>

int main() {
    // N�mero de casas que cada pe�a ir� se mover
    int casasTorre = 5;
    int casasBispo = 5;
    int casasRainha = 8;

    // -----------------------------
    // Movimento da Torre (for loop)
    // -----------------------------
    printf("Movimento da Torre:\n");
    int i; // Declara��o feita fora do for
    for (i = 1; i <= casasTorre; i++) {
        printf("Direita\n");
    }

    // -----------------------------
    // Movimento do Bispo (while loop)
    // -----------------------------
    printf("\nMovimento do Bispo:\n");
    int j = 1;
    while (j <= casasBispo) {
        printf("Cima Direita\n");
        j++;
    }

    // -----------------------------
    // Movimento da Rainha (do-while loop)
    // -----------------------------
    printf("\nMovimento da Rainha:\n");
    int k = 1;
    do {
        printf("Esquerda\n");
        k++;
    } while (k <= casasRainha);

    return 0;
}

