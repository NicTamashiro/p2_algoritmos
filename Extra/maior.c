#include <stdio.h>

void maior(int a, int b){
    if(a == b) printf("Iguais!\n");
    else if(a > b) printf("'A' eh o mairo\n");
    else printf("'B' eh o maior\n");
}

int main(){

    int a,b;
    printf("Digite dois numeros: \n");
    scanf("%d %d", &a, &b);

    maior(a,b);

    return 0;
}