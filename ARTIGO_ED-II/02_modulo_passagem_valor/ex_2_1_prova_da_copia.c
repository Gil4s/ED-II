#include <stdio.h>

/* Protótipo de uma função que NÃO retorna valor (void) */
void tentar_modificar(int x);

int main() {
    int numero_principal = 10;
    
    printf("1. Valor ANTES da função: %d\n", numero_principal);
    
    /* 1. Chamada da função */
    tentar_modificar(numero_principal);
    
    /* 3. Verificação pós-função */
    printf("3. Valor DEPOIS da função: %d\n", numero_principal);
    
    return 0;
}

/*
 * Definição da função
 */
void tentar_modificar(int x) {
    /* 2. Modificação local 
     * 'x' é uma CÓPIA de 'numero_principal'.
     * Esta linha altera APENAS a cópia.
     */
    x = x + 100; // x agora vale 110
    
    printf("   2. Valor DENTRO da função: %d\n", x);
}