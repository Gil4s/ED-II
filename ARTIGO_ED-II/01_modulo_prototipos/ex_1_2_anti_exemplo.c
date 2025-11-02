#include <stdio.h>

/* Note a ausência de um protótipo aqui */

int main() {
    
    /* 1. CHAMADA "CEGA"
     * O compilador chega aqui sem nunca ter ouvido falar da função 'soma'.
     * Isso irá gerar um aviso (warning) ou, em compiladores modernos
     * mais rígidos, até mesmo um erro.
     */
    int resultado = soma(10, 5); 
    
    printf("O resultado é: %d\n", resultado);
    return 0;
}

/* 2. DEFINIÇÃO TARDIA
 * A função só é definida aqui, depois de já ter sido usada no 'main'.
 */
int soma(int a, int b) {
    return a + b;
}