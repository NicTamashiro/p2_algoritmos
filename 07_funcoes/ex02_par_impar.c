/*
Exercicio 02
Tema: 07_funcoes
*/

#include <stdio.h>

int ehimpar(int n){
    if(n % 2 != 0){
        return 1;
    } else{
        return 0;
    }
}

int ehpar(int n){
    if (n % 2 == 0){
        return 1;
    } else if(ehimpar(n) == 1){
        return 0;
    }
}


int main() {

    int n;
    printf("Digite um numero para saber se eh 'par' ou 'impar':\n");
    scanf("%d", &n);

    if (ehpar(n) == 1){
        printf("'%d' eh par\n", n);
    } else {
        printf("'%d' eh impar\n", n);
    }

    return 0;
}
