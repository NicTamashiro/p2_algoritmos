/*
Exercicio 02
Tema: 05_vetores
*/

#include <stdio.h>

float soma(float * arr, int tamanho){
    float soma = 0;

    for(int i = 0; i < tamanho; i++){
        soma += arr[i];
    }
    return soma;
}

float media(float * arr, int tamanho){
    return soma(arr, tamanho) / tamanho;
}

int main() {

    float arr[] = {2.0, 4.0, 6.0};
    int tamanho = sizeof(arr) / sizeof(arr[0]);

    float sum = soma(arr, tamanho);
    float average = media(arr, tamanho);

    printf("Soma: %.2f\n", sum);
    printf("Media: %.2f\n", average);

    return 0;
}
