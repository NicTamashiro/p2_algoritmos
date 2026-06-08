/*
Exercicio 02
Tema: 03_recursividade
*/

#include <stdio.h>

int fib(int n){
    if (n == 1){
        return 0;
    } else if (n == 2){
        return 1;
    }

    return fib(n - 1) + fib(n - 2);
}

int main() {

    int n = 5;

    printf("O fibonacci de '%d' eh = %d\n", n, fib(n));

    return 0;
}
