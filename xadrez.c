#include <stdio.h>

// -----------------------------
// Função recursiva para Torre
// -----------------------------
void moverTorre(int casas) {
    if (casas == 0) return;
    printf("Direita\n");
    moverTorre(casas - 1);
}

// -----------------------------
// Função recursiva para Rainha
// -----------------------------
void moverRainha(int casas) {
    if (casas == 0) return;
    printf("Esquerda\n");
    moverRainha(casas - 1);
}

// -----------------------------
// Função recursiva e loops aninhados para Bispo
// -----------------------------
void moverBispo(int verticais, int horizontais) {
    if (verticais == 0) return;

    for (int i = 1; i <= horizontais; i++) {
        printf("Cima Direita\n");
    }

    moverBispo(verticais - 1, horizontais); // chamada recursiva
}

// -----------------------------
// Movimento do Cavalo com loops complexos
// -----------------------------
void moverCavalo() {
    int cima = 2;
    int direita = 1;

    printf("\nMovimento do Cavalo:\n");

    for (int i = 1; i <= cima; i++) {
        printf("Cima\n");
        if (i == cima) {
            int j = 1;
            while (j <= direita) {
                if (j == 1) {
                    printf("Direita\n");
                    break;  // usado para controlar o fluxo de saída
                }
                j++;
            }
        }
    }
}

// -----------------------------
// Função principal
// -----------------------------
int main() {
    int casasTorre = 5;
    int casasRainha = 8;
    int casasBispoVerticais = 5;
    int casasBispoHorizontais = 1; // cada movimento do bispo move 1 casa horizontal a cada vertical

    printf("Movimento da Torre:\n");
    moverTorre(casasTorre);

    printf("\nMovimento do Bispo:\n");
    moverBispo(casasBispoVerticais, casasBispoHorizontais);

    printf("\nMovimento da Rainha:\n");
    moverRainha(casasRainha);

    moverCavalo();

    return 0;
}

