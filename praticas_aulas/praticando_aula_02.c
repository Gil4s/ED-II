#include <stdio.h>
#include <stdlib.h>

int fibonacci(int n) {
    if (n <= 1)
        return n;
    else
        return fibonacci(n - 1) + fibonacci(n - 2);
}

int main(int argc, char *argv[]) {
    int n, i;
    if (argc > 1) {
        n = atoi(argv[1]);
    } else {
        printf("Digite o número de termos da sequência de Fibonacci: ");
        scanf("%d", &n);
    }
    fibonacci(n); // Chamada para gerar a pilha de chamadas

    return 0;
}


// Vamos usar o fibonacci para aplocar os comando práticos de depuração

// Passo 1

// Vamos aprender como entranmos do gbd (GNU Debugger) para o código fonte
// compile o código com a flag -g
// gcc praticando_aula_02.c -o praticando_aula_02.exe -g
// rode o gdb com o comando
// gdb praticando_aula_02.exe

// Passo 2
// Coloque um breakpoint na função fibonacci
// (gdb) break fibonacci

// (gdb) run 5 
// Vamos rodar o programa com 5 termos

// Passo 3
// Vamos usar o comando backtrace para ver a pilha de chamadas
// (gdb) backtrace
// Agora, estamos inspecionando a pilha de chamadas

// Passo 4
// Vamos continuar a execução do programa dentro do depurador, para ver o que de fato acontece