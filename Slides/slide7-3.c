#include <stdio.h>



int matriz_quadrada(int lin, int col){
    if (lin == col) return 1;
    return 0;
}

void soma_diagonal(int lin, int col, int matriz[lin][col]){
    int soma = 0;
    
    for(int i = 0; i < lin; i++){
        soma += matriz[i][i];
    }

    printf("Soma da diagonal principal = %d\n", soma);
}

int main(){

    int lin, col;
    printf("Qual a qtd de linhas e colunas: ");
    scanf("%d %d", &lin, &col);

    int matriz[lin][col];

    for(int i = 0; i < lin; i++){
        for(int j = 0; j < col; j++){
            scanf("%d", &matriz[i][j]);
        }
    }

    int quadrada = matriz_quadrada(lin, col);
    
    if(quadrada){
        soma_diagonal(lin, col, matriz);
    }

    return 0;
}