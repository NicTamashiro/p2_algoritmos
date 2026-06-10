/*
Exercicio 03
Tema: 07_funcoes
*/

#include <stdio.h>

int maior(int * arr){
    int maior = arr[0];

    for(int i = 1; i < 3; i++){
        if (arr[i] > maior){
            maior = arr[i];
        }
    }
    return maior;
}

int main() {

    int arr[3];
    for(int i = 0; i < 3; i++){
        scanf("%d", &arr[i]);
    }

    int resultado = maior(arr);

    printf("%d", resultado);

    return 0;
}
