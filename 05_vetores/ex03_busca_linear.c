/*
Exercicio 03
Tema: 05_vetores
*/

#include <stdio.h>

int busca_linear(int * arr, int tamanho, int target){
    for(int i = 0; i < tamanho; i++){
        if(arr[i] == target)
            return i;
    }
    return -1;
}

int main() {

    int arr[] = {5,3,8,1,7};
    int target = 8;
    int tamanho = sizeof(arr) / sizeof(arr[0]);

    int resultado = busca_linear(arr, tamanho,target);

    if(resultado == -1){
        printf("Elemento nao encontrado\n");
    } else {
        printf("O numero '%d' se encontra na posicao: %d\n", target, resultado);
    }

    return 0;
}
