/*
Exercicio 04
Tema: 05_vetores
*/

#include <stdio.h>

void inverting_arr(int * arr, int size){
    int start = 0;
    int end = size - 1;

    for(int i = 0; i < size/2; i++){
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;

        start++;
        end--;
    }   
}

int main() {

    int arr[] = {1,2,3,4,5};
    int size = sizeof(arr) / sizeof(arr[0]);

    inverting_arr(arr, size);

    for(int i = 0; i < size; i++){
        printf("%d ", arr[i]);
    }

    return 0;
}
