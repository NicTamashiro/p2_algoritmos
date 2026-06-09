#include <stdio.h>

int pesq_bin(int * arr, int tam_vetor, int target){
    int inicio = 0;
    int fim = tam_vetor - 1;
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

int main(){
    int tam_vetor;
    int target;

    printf("Qual sera o tamanho do seu vetor: ");
    scanf("%d", &tam_vetor);

    int arr[tam_vetor];

    for(int i = 0; i < tam_vetor; i++){
        scanf("%d", &arr[i]);
    }

    printf("Qual elemento deseja saber o indice: ");
    scanf("%d", &target);

    int indice = pesq_bin(arr, tam_vetor, target);

    if (indice == -1){
        printf("Elemento nao encontrado!\n");
    } else {
        printf("Elemento encontrado na posicao '%d'\n", indice);
    }

    return 0;
}