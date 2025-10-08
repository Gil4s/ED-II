#include<stdio.h> // printf
#include<stdlib.h> // atoi e atof (conversor de string para int e float dos argumentos)

int main ( int argc, char *argv[]){

    printf ("Precisamos encontrar o maior valor entre os argumentos passados na execução do programa.\n");

    if (argc != 11){
        printf ("Digite somente 10 valores\n");
        return 1; // retornando erro
        // EX: praticando03_aula01.exe 1.1 2.2 3.3 4.4 5.5 6.6 7.7 8.8 9.9 10.0
    }

int i;
float maior_valor = 0;
float teste [10];

    for (i = 0; i < 10; i++){ 

        
        teste [i] = atof(argv[i + 1]);

        if (i == 1 ){
            maior_valor = teste[i];}

        if (maior_valor < teste[i]){
            maior_valor = teste[i];}

    }

    printf ("O maior valor entre os argumentos é: %.2f\n", maior_valor);

}
