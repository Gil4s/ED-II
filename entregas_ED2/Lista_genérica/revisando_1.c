#include<stdio.h>
#include<stdlib.h>

int main (){

    printf("Revisando conceitos de lista genérica em c\n");

    typedef void(*cb_free)(void*d); //*cbfree, é um ponteiro para função que não retorna nada (void) e recebe um ponteiro genérico (void*)
    // Perceba que, ao colocar um void (*......) estou dizendo que os dados são do tipo void
    return 0;
}