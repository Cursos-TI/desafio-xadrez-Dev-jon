#include <stdio.h>


#define CIMA 1
#define BAIXO 2
#define ESQUERDA 3
#define DIREITA 4
#define DIAGONAL_SUP_DIR 5
#define DIAGONAL_SUP_ESQ 6
#define DIAGONAL_INF_DIR 7
#define DIAGONAL_INF_ESQ 8


//  o Bispo (diagonal superior direita)

void moverBispo() {
    printf("\nMovimento do Bispo (5 casas na diagonal superior direita):\n");
    
    for(int i = 1; i <= 5; i++) {
        printf("Casa %d: ", i);
        printf("Cima ");
        printf("Direita\n");
    }
}

// a Torre (5 casas para a direita)


void moverTorre() {
    printf("\nMovimento da Torre (5 casas para a direita):\n");
    
    int casa = 1;
    while(casa <= 5) {
        printf("Casa %d: ", casa);
        printf("Direita\n");
        casa++;
    }
}



//  a Rainha (8 casas para a esquerda)


void moverRainha() {
    printf("\nMovimento da Rainha (8 casas para a esquerda):\n");
    
    int casa = 1;
    do {
        printf("Casa %d: ", casa);
        printf("Esquerda\n");
        casa++;
    } while(casa <= 8);
}

int main() {
    printf("=== SIMULADOR DE MOVIMENTOS DE XADREZ ===\n");
    printf("=== Teste de desempenho para equipe MateCheck ===\n\n");

    // Movimentos com diferentes estruturas de repetição
    
    moverBispo();   // for
    
    moverTorre();    //  while
    
    moverRainha();   //  do-while

    printf("\nTeste de movimentos concluído com sucesso!\n");
    return 0;
}