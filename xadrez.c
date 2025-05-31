#include <stdio.h>

int main() {
    // Quantidade de casas para cada peça
    int casasTorre = 5;
    int casasBispo = 5;
    int casasRainha = 8;

    // -----------------------------
    // Movimento da Torre (for loop)
    // -----------------------------
    printf("Movimento da Torre:\n");
    int i;
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

    // -----------------------------
    // Movimento do Cavalo (loops aninhados: for + while)
    // -----------------------------
    printf("\nMovimento do Cavalo:\n");

    int passosBaixo = 2;
    int passosEsquerda = 1;

    // Loop externo com for para as 2 casas para baixo
    for (int m = 1; m <= passosBaixo; m++) {
        printf("Baixo\n");
        // Dentro de cada passo para baixo, um while que só executa no último passo
        if (m == passosBaixo) {
            int n = 1;
            while (n <= passosEsquerda) {
                printf("Esquerda\n");
                n++;
            }
        }
    }

    return 0;
}

