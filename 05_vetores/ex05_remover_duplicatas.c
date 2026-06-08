/*
Exercicio 05
Tema: 05_vetores
*/

#include <stdio.h>

int remove_dup(int * arr, int tamanho){
    if(tamanho == 0) return 0;

    int escrita = 0;

    for(int i = 1; i < tamanho; i++){
        if(arr[i] != arr[escrita])
            escrita++;
            arr[escrita] = arr[i];
    }

    return escrita + 1;
}

int main() {

    int arr[] = {1,1,2,3,3,4};
    int tamanho = sizeof(arr) / sizeof(arr[0]);

    int new_size = remove_dup(arr, tamanho);

    printf("New size = %d\n", new_size);
    for(int i = 0; i < tamanho; i++){
        printf("%d ", arr[i]);
    }

    return 0;
}
