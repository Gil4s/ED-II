#include <stdio.h>

/* 1. Protótipo com PONTEIROS
 * A função agora espera "endereços de inteiros" (int*),
 * e não mais valores inteiros (int).
 */
void trocar_sucesso(int *ptr_a, int *ptr_b);

int main() {
    int a = 10;
    int b = 20;
    
    printf("1. ANTES da troca: a = %d, b = %d\n", a, b);
    
    /* 2. Chamada com o operador "Endereço de" (&)
     * Não estamos passando os valores 'a' e 'b'.
     * Estamos passando os ENDEREÇOS de 'a' e 'b' na memória.
     */
    trocar_sucesso(&a, &b);
    
    /* 4. Verificação pós-função */
    printf("3. DEPOIS da troca: a = %d, b = %d\n", a, b);
    
    return 0;
}

/*
 * Definição da função
 */
void trocar_sucesso(int *ptr_a, int *ptr_b) {
    /* 'ptr_a' é um ponteiro que guarda o endereço de 'a'
     * 'ptr_b' é um ponteiro que guarda o endereço de 'b'
     */
     
    /* 3. Operador de "Dereferência" (*)
     * Usamos '*' para acessar O VALOR que está no endereço apontado.
     *
     * temp = *ptr_a; (temp = valor apontado por ptr_a, ou seja, 10)
     * *ptr_a = *ptr_b; (O valor em 'a' recebe o valor em 'b')
     * *ptr_b = temp;   (O valor em 'b' recebe o valor de temp)
     */
    int temp = *ptr_a;
    *ptr_a = *ptr_b;
    *ptr_b = temp;
    
    /* 4. A função termina. As variáveis 'a' e 'b' originais no main
     * foram permanentemente modificadas.
     */
}