#include <stdio.h>
#include <stdlib.h> // Para usar a macro 'NULL'

/* 1. A FUNÇÃO PERIGOSA
 * Tenta usar o ponteiro sem verificar.
 */
void incrementar_perigoso(int *ponteiro_valor);

/* 2. A BOA PRÁTICA
 * Verifica se o ponteiro é válido (não-NULO) antes de usar.
 */
void incrementar_seguro(int *ponteiro_valor);


int main() {
    int *ponteiro_nulo = NULL;
    
    // --- TESTE AS DUAS VERSÕES ---
    // Alterne qual linha está comentada para ver os dois resultados.
    
    /* * TESTE 1: A VERSÃO PERIGOSA (Descomente para testar)
     * Esta chamada irá causar um "Segmentation Fault" e quebrar o programa.
     */
    // printf("Testando a função perigosa...\n");
    // incrementar_perigoso(ponteiro_nulo);


    /* * TESTE 2: A VERSÃO SEGURA (Ativa por padrão)
     * Esta chamada verifica o NULL e o programa continua normalmente.
     */
    printf("Testando a função segura...\n");
    incrementar_seguro(ponteiro_nulo);
    

    /* Esta linha só será alcançada se a função segura for usada. */
    printf("Programa sobreviveu e terminou com sucesso.\n");
    
    return 0;
}

// --- DEFINIÇÕES DAS FUNÇÕES ---

void incrementar_perigoso(int *ponteiro_valor) {
    /* 3. A QUEBRA (CRASH)
     * Ao tentar acessar o valor ('*') de um endereço NULO,
     * o programa quebra (Segmentation Fault).
     */
    *ponteiro_valor = *ponteiro_valor + 1;
    printf("Função perigosa: Valor incrementado.\n");
}


void incrementar_seguro(int *ponteiro_valor) {
    /* 4. A VERIFICAÇÃO (BOA PRÁTICA)
     * A função só tenta acessar o valor se o ponteiro for válido.
     */
    if (ponteiro_valor != NULL) {
        *ponteiro_valor = *ponteiro_valor + 1;
        printf("Função segura: Valor incrementado.\n");
    } else {
        printf("Função segura: Ponteiro NULO detectado, nada foi feito.\n");
    }
}