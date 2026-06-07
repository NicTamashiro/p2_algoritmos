/*
Exercicio 01
Tema: 01_insertion_sort
*/

void ordenar_crescente(int * arr, int tamanho){
    for(int i = 0; i < tamanho; i++){
        int temp = arr[i];
        int j = i - 1;

        while(j >= 0 && arr[j] > temp){
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = temp;    
    }
}

#include <stdio.h>

int main() {

    int arr[] = {5, 2, 8, 1, 9};
    int tamanho = sizeof(arr) / sizeof(arr[0]);

    ordenar_crescente(arr, tamanho);

    for(int i = 0; i < tamanho; i++){
        printf("%d ", arr[i]);
    }

    return 0;
}
