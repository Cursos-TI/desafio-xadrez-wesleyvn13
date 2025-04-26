#include <stdio.h>

// Este codigo vai simular a movimentação de três peças de xadrez. Ele vai imprimir na tela a direção de cada peça.

int main() {

    // Declaração de variaveis para contador.

    int cont1 = 1, cont2 = 1, j = 1;

    // movimentação do torre. 

    printf("\n*** TORRE ***\n\n");

    // O while vai repetir o bloco de codigo  5 vezes.
    while (cont1<=5) {
    
        printf("Movimento %d : Direita\n", cont1 );  // imprime 5 vezes "direita"
        
         cont1++;
    };

    // movimentação do bispo.

    printf("\n+++ BISPO +++\n\n");

    // O do-while vai repetir o bloco de codigo  5 vezes.
    do {
        printf("Movimento %d : Cima, Direita\n", cont2);  // imprime 5 vezes "cima, direita"
        cont2++;
    } while (cont2<=5);

    //movimentação da rainha.

    printf("\nMMM RAINHA MMM\n\n");

    // O For vai repetir o bloco de codigo 8 vezes.
    for (int cont3 = 1 ; cont3 <=8 ; cont3++ ) {
        printf("Movimento %d : Esquerda\n", cont3);  // imprime 8 vezes "esquerda"
    };


    // movimentação do cavalo.

    printf("\n $$$ CAVALO $$$");

     // loop aninhado usando for e while.
     // simula o movimento em "L" do cavalo para esquerda (nesse caso).
     for(int cont4 = 1; cont4 == 1; cont4++ ) {
        printf("\n");
        while (j <=2) {
            printf("Movimento %d : Baixo\n", j); // imprime 2 vezes "baixo"
            j++;
        }
        printf("Movimento %d : Esquerda\n", cont4); // imprime 1 vez "esquerda"
     }


    return 0;
}
