#include <stdio.h>

// Este codigo vai simular a movimentação de quatro peças de xadrez. Ele vai imprimir na tela a direção de cada peça.

void movimentoTorre ( int cont) {
    if (cont <= 5) {
        printf("Movimento %d : Direita\n", cont );  // imprime 5 vezes "direita"
    
        movimentoTorre(cont + 1);
    }
    
}

void movimentoBispo( int cont) {
    if (cont <= 5) {
        for (int i = 0; i < 1; i++) {
            printf("Movimento %d : Cima,", cont);
            for (int j = 0; j < 1; j++) {
                printf(" Direita\n");
                
            }
            
        }

        movimentoBispo( cont + 1);
    }
}

void movimentoRainha(int cont) {

    if (cont <= 8) {
        printf("Movimento %d : Esquerda\n", cont);

        movimentoRainha(cont + 1);
    }
}

void movimentoCavalo(int cont) {
   
        for (int i = 1; i <= 2; i++) {
            for (int j = 1; j <= 2 ; j++){
                printf("\nMovimento %d : Cima", cont);
                cont++;
            }
            printf("\nMovimento %d : Direita",cont);
            break;
        }
    
}

// Inicio da Execução do Codigo.

int main() {

    // Declaração da variavel para o contador.

    int numero = 1;

    // movimentação do torre. 
    printf("\n*** TORRE ***\n\n");

    movimentoTorre(numero); // Chama a funçao para executar a movimentação da torre.

    // movimentação do bispo.
    printf("\n+++ BISPO +++\n\n");

    movimentoBispo(numero); // Chama a funçao para executar a movimentação do bispo.

    //movimentação da rainha.
    printf("\nMMM RAINHA MMM\n\n");

    movimentoRainha(numero); // Chama a funçao para executar a movimentação da rainha.

    // movimentação do cavalo.
    printf("\n$$$ CAVALO $$$");
  
    // simula o movimento em "L" do cavalo para direita (nesse caso).
    movimentoCavalo (numero); // Chama a funçao para executar a movimentação do cavalo.

    return 0;
}
