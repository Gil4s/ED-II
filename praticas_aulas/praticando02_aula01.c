#include<stdio.h> //printf
#include<stdlib.h> //atoi (conversor de string para int e dos argumentos)

int main (int argc, char *argv[]){

    if (argc != 11){
        printf ("Digite somente 10 valores para trabharmos com o vetor.\n"); // estamos passando 11 porque o primeiro argumento é o nome do programa
        return 1; // retornando erro
        // EX: praticando02_aula01.exe 1 2 3 4 5 6 7 8 9 10
    }

    int vetor [10]; // declaração do vetor de 10 posições
    int soma = 0;
    float media = 0;
    int i;

    for (i > 0; i <= 10; i++){
        
        vetor [i] = atoi(argv[i + 1]); // convertendo os argumentos de string para int e armazenando no vetor
        // fazemos o i + 1 porque o primeiro argumento é o nome do programa e não um valor numérico
        // começamos a armazenar a partir do segundo argumento
        soma += vetor[i]; // somando os valores do vetor
        
    }

    media = (soma/10.0);
    // preciso passar eesse valor como float para que a média saia com casa decimal
    // vamos dividir por 10.0 ou fazer um cast (float)soma / 10
    printf ("A soma dos valores do vetor é: %d\n", soma); 
    printf ("A média dos valores do vetor é: %.1f\n", media);

}
