#include <stdio.h>

/* Protótipos */
void imprimir_array(int arr[], int tamanho);
void dobrar_valores(int arr[], int tamanho);

int main() {
    int meu_array[5] = {10, 20, 30, 40, 50};
    int tamanho = 5;
    
    printf("1. Array ANTES da função:\n");
    imprimir_array(meu_array, tamanho);
    
    /* 1. Passando o array para a função.
     * Note que não usamos '&' ou '*'.
     * Apenas o nome do array é passado.
     */
    dobrar_valores(meu_array, tamanho); 
    
    /* 3. A PROVA
     * Ao imprimir novamente, vemos que o array 
     * original no 'main' foi permanentemente alterado.
     */
    printf("\n3. Array DEPOIS da função:\n");
    imprimir_array(meu_array, tamanho); 
    
    return 0;
}

/*
 * Definição da função que modifica o array
 */
void dobrar_valores(int arr[], int tamanho) {
    printf("\n   2. DENTRO da função (modificando)...\n");
    
    for (int i = 0; i < tamanho; i++) {
        /* 2. A MODIFICAÇÃO
         * Esta alteração está afetando o array original
         * da função 'main'.
         */
        arr[i] = arr[i] * 2; 
    }
}

/*
 * Função auxiliar apenas para imprimir o array
 */
void imprimir_array(int arr[], int tamanho) {
    printf("   [ ");
    for (int i = 0; i < tamanho; i++) {
        printf("%d ", arr[i]);
    }
    printf("]\n");
}