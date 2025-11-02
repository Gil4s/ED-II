#include <stdio.h>

/* Protótipo da função que tenta trocar dois valores */
void trocar_falha(int x, int y);

int main() {
    int a = 10;
    int b = 20;
    
    printf("1. ANTES da troca: a = %d, b = %d\n", a, b);
    
    /* 1. Chamada da função. 
     * O C 'copia' o valor de 'a' para 'x' e 'copia' o valor de 'b' para 'y'.
     */
    trocar_falha(a, b);
    
    /* 3. Verificação pós-função */
    printf("3. DEPOIS da troca: a = %d, b = %d\n", a, b);
    
    return 0;
}

/*
 * Definição da função
 */
void trocar_falha(int x, int y) {
    /* 'x' e 'y' são CÓPIAS locais (x=10, y=20) */
    
    int temp = x;
    x = y;
    y = temp;
    
    /* 2. As cópias 'x' e 'y' foram trocadas com sucesso. */
    printf("   2. DENTRO da função: x = %d, y = %d\n", x, y);
}