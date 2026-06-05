#include <stdio.h>

int quadrada(int lin, int col){
    if(lin == col) return 1;
    else return 0;
}

int soma(int lin, int col, int matriz[lin][col]){
    int soma = 0;
    int coluna = 0;

    for(int i = 0; i < lin; i++){
        for(int j = coluna; j <= i; j++){
            soma += matriz[i][j];
            coluna++;
        }
    }

    return soma;
}

int main(){
    int lin, col;

    printf("Digite o numero de linhas e colunas: \n");
    scanf("%d %d", &lin, &col);

    int matriz[lin][col];

    for(int i = 0; i < lin; i++){
        for(int j = 0; j < col; j++){
            scanf("%d", &matriz[i][j]);
        }
    }

    if(quadrada(lin, col)){
        int resultado = soma(lin, col, matriz);
        printf("Soma = %d\n", resultado);
    } else {
        printf("Nao eh uma matriz quadrada\n");
    }

}