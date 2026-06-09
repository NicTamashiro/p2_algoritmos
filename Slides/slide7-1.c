#include <stdio.h>

void compara(int n1, int n2){
    if(n1 == n2){
        printf("Sao iguais!");
    } else if(n1 > n2){
        printf("%d eh o maior", n1);
    } else {
        printf("%d eh o maior", n2);
    }
}

int main(){

    int n1, n2;
    scanf("%d %d", &n1, &n2);

    compara(n1, n2);

    return 0;
}