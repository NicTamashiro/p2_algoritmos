/*
Exercicio 04
Tema: 03_recursividade
*/

#include <stdio.h>

int calcula_soma(int * arr, int tamanho){
    if (tamanho == 0){
        return 0;
    }

    return arr[tamanho-1] + calcula_soma(arr, tamanho - 1);
}

int main(){

    int arr[] = {2,4,5,9};
    int tamanho = sizeof(arr)/ sizeof(arr[0]);

    int soma = calcula_soma(arr, tamanho);

    printf("Soma = %d\n", soma);

    return 0;
}

/*

arr[3] + soma(arr, 4)
            arr[2] +    soma(arr, 3)
                                arr[1]   +  soma(arr, 2)
                                                    arr[0]    +    soma(arr, 1)
                                                                            0

*/