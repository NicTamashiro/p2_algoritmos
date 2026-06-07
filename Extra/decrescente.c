#include <stdio.h>

void ordenar_decrescente(int * arr, int tamanho){
    for(int i = 1; i < tamanho; i++){
        int temp = arr[i];
        int j = i - 1;

        while(j >= 0 && arr[j] < temp){
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = temp;
    }
}

int main(){

    int arr[5] = {3,1,4,8,5};
    int tamanho = sizeof(arr) / sizeof(arr[0]);

    ordenar_decrescente(arr, tamanho);

    for(int i = 0; i < tamanho; i++){
        printf("%d ", arr[i]);
    }

    return 0;
}