#include <stdio.h>

/*
 * 1. DEFINIÇÃO COMPLETA ANTES DO MAIN
 * A função 'soma' é inteiramente definida *antes* de ser usada.
 * Para o compilador, a "definição" também serve como "declaração".
 */
int soma(int a, int b) {
    return a + b;
}

/*
 * 2. FUNÇÃO PRINCIPAL
 * Quando o compilador chega aqui, ele já leu e entendeu
 * completamente o que é a função 'soma'.
 */
int main() {
    
    /* 3. CHAMADA DA FUNÇÃO
     * Esta chamada é 100% segura e validada pelo compilador,
     * pois ele já conhece a assinatura exata de 'soma'.
     */
    int resultado = soma(10, 5); 
    
    printf("O resultado é: %d\n", resultado);
    return 0;
}