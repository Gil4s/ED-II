#include <stdio.h>

/* 1. Protótipo da Função (Declaração) 
 * Informa ao compilador a "assinatura" da função 'soma'.
 */
int soma(int a, int b);

/*
 * Função Principal (Ponto de entrada)
 */
int main() {
    
    /* 2. Chamada da Função 
     * O compilador confia no protótipo e permite esta chamada.
     */
    int resultado = soma(10, 5);
    
    printf("O resultado da soma é: %d\n", resultado);
    return 0;
}

/*
 * 3. Definição da Função (Implementação)
 * O código real que a função executa.
 */
int soma(int a, int b) {
    return a + b;
}