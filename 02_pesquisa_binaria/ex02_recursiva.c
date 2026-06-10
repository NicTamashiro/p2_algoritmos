/*
Exercicio 02
Tema: 02_pesquisa_binaria
*/

#include <stdio.h>

int bin_search(int * arr, int inicio, int fim, int target){
    if(inicio > fim) return -1;

    int meio = inicio + (fim - inicio) / 2;

    if(arr[meio] == target) return meio;
    else if(arr[meio] > target) return bin_search(arr, inicio, meio - 1, target);
    else return bin_search(arr, meio + 1, fim, target);
}

int main() {

    int arr[] = {1,3,5,7,8,12,23,43};
    int tamanho = sizeof(arr) / sizeof(arr[0]);

    int posicao = bin_search(arr, 0, tamanho - 1, 7);

    if (posicao == -1){
        printf("Elemento nao encontrado\n");
    } else{
        printf("Elemento encontrado na posicao: %d\n", posicao);
    }

    return 0;
}
