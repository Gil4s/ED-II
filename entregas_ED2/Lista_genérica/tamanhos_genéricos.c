#include<stdio.h>
#include<stdlib.h>

int main () {


    int x = 10;
    void *ponteiro_generico; // void ta tipando o endereço de p, com o ponteiro, ou seja, p é um ponteiro genérico
    int *ponteiro_convencional;
    ponteiro_generico = &x;
    ponteiro_convencional = &x;
    

    // perceba que, ao tentar imprimir o ponteiro convencional, eu não vou conseguir e vai dar um erro .... 

    // a menos que eu formate o ponteiro para um tipo que respeita o tipo de dado que ele está apontando

    printf("%d\n", *ponteiro_convencional); // aqui eu estou desreferenciando o ponteiro convencional, que é do tipo int, então ele respeita o tipo de dado que está apontando
   
    printf("%d\n", ponteiro_generico);
    // vai mostrar o endereço de memória onde o valor de X está armazenado

    // se eu imprimir o ponteiro genérico, veja que ele vai representar o endereço de memória onde o dado está armazenado
    // esse endereço é do tipo genérico, logo, eu não vou ter o valor de X que eu quero acessar, mas nele, está armazenado o valor de X, porém, como eu disse, eu preciso formatar para inteiro

    // Passo a passo da formatação: *ponteiro_generico (METODOLOGIA CONVENCIONAL)
    // CONVERTENDO PARA O TIPO DE DADO QUE EU QUERO FORMATAR: *(int*)ponteiro_generico (FORMATAÇÃO PARA INTEIRO)
    // FORMATAÇÃO COMPLETA: *(int*)ponteiro_generico
    // FORMATAÇÃO PARA OUTRO TIPO DE DADO: *(float*)ponteiro_generico (FORMATAÇÃO PARA FLOAT, POR EXEMPLO)
    // FORMATAÇÃO PARA OUTRO TIPO DE DADO: *(char*)ponteiro_generico (FORMATAÇÃO PARA CHAR, POR EXEMPLO)

    printf("%d\n", *(int*)ponteiro_generico); // aqui eu estou desreferenciando o ponteiro genérico, mas antes eu estou convertendo ele para o tipo int*, assim ele respeita o tipo de dado que está apontando
    // vai mostrar o valor de X corretamente
   

    return 0;
}