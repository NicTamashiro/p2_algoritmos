/*
Exercicio 01
Tema: 02_pesquisa_binaria
*/

#include <stdio.h>

int bin_search(int * arr, int tamanho, int target){
    int inicio = 0;
    int fim = tamanho - 1;
    int meio;

    while(inicio <= fim){
        meio = inicio + (fim - inicio) / 2;

        if(arr[meio] == target){
            return meio;
        } else if(arr[meio] > target){
            fim = meio - 1;
        } else {
            inicio = meio + 1;
        }
    }
    return -1;
}

int main() {

    int arr[] = {2,5,8,12,16,23,38,56,72,91};
    int tamanho = sizeof(arr) / sizeof(arr[0]);
    int target = 23;

    int resultado = bin_search(arr, tamanho, target);

    if(resultado == -1){
        printf("Elemento nao encontrado\n");
    } else {
        printf("Posicao: %d\n", resultado);
    }

    return 0;
}
