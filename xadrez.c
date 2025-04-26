#include <stdio.h>

// Este codigo vai simular a movimentação de três peças de xadrez. Ele vai imprimir na tela a direção de cada peça.

int main() {

    // Declaração de variaveis para contador.

    int cont1 = 1 , cont2 = 1;

    // movimentação do torre. 

    printf("\n*** TORRE ***\n\n");

    // O while vai repetir o bloco de codigo  5 vezes.
    while (cont1<=5) {
    
        printf("Casa %d : Direita\n", cont1 );
        
         cont1++;
    };

    // movimentação do bispo.

    printf("\n+++ BISPO +++\n\n");

    // O do-while vai repetir o bloco de codigo  5 vezes.
    do {
        printf("Casa %d : Cima, Direita\n", cont2);
        cont2++;
    } while (cont2<=5);

    //movimentação da rainha.

    printf("\nMMM RAINHA MMM\n\n");

    // O For vai repetir o bloco de codigo 8 vezes.
    for (int cont3 = 1 ; cont3 <=8 ; cont3++ ) {
        printf("Casa %d : Esquerda\n", cont3);
    };

    return 0;
}
