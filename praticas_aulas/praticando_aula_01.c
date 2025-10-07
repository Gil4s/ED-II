#include<stdio.h> //printf
#include<stdlib.h> // atoi 


// vamos inserir os argumentos


int main (int argc  , char *argv[]) {
    
    int num_A, num_B, soma;
    
    printf ("Digite 2 números para que façamos a soma dos mesmos.\n"); 
    num_A = atoi(argv[1]); // fazendo minha variável recever os valores passados noes argumetnos de execução -> argumento 1
    num_B = atoi(argv[2]); // fazendo minha variável receber os valores passados nos argumetnos de execução -> argumento 2 

    // vale lembrar que o usuário precisa por obrigação, passar os valores na execução do programa
    // EX: praticando.exe 5 10
    // onde 5 é o argumento 1 e 10 é o argumento 2

    soma = num_A + num_B;

    printf ("O valor da soma é: %d", soma);

    return 0;
}


