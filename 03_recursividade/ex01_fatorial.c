/*
Exercicio 01
Tema: 03_recursividade
*/

#include <stdio.h>

int fatorial(int num){
    if(num == 1) return 1;
    else return num * fatorial(num - 1);
}

int main() {

    int num = 5;

    int resultado = fatorial(num);

    printf("Fatorial = %d\n", resultado);

    return 0;
}