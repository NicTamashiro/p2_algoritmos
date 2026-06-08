/*
Exercicio 01
Tema: 05_vetores
*/

int maior(int * num, int tamanho){
    int maior = num[0];

    for(int i = 1; i < tamanho; i++){
        if(num[i] > maior){
            maior = num[i];
        }
    }

    return maior;
}

int menor(int * num, int tamanho){
    int menor = num[0];

    for(int i = 1; i < tamanho; i++){
        if(num[i] < menor){
            menor = num[i];
        }
    }

    return menor;
}

#include <stdio.h>

int main() {

    int num[] = {3,7,1,9,4};
    int tamanho = sizeof(num) / sizeof(num[0]);

    int highest = maior(num, tamanho);
    int worst = menor(num, tamanho);

    printf("Maior = %d\n", highest);
    printf("Menor = %d\n", worst);

    return 0;
}
