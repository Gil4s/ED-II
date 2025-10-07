#include <stdio.h>
#include <stdlib.h>

int main (){ //(int argc, int *argv[])

    
    int a,b;

    printf ("Digite o primeiro número da soma: ");
    scanf ("%d",&a); // formatação para a leitura do valor e armazenamento no ENDEREÇO DO VALOR
    printf ("Digite o segundo número da soma: ");
    scanf ("%d",&b); // formatação para a leitura do valor e armazenamento no ENDEREÇO DO VALOR
    int soma = a + b;
    printf ("Resultado da soma: %d", soma);
    return 0;

    
}