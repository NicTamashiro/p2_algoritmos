#include <stdio.h>

int main(){

    int num[5];
    int tam = sizeof(num) / sizeof(num[0]);

    for(int i = 0; i < tam; i++){
        scanf("%d", &num[i]);
    }
    
    for(int i = tam - 1; i >= 0; i--){
        printf("%d ", num[i]);
    }

    return 0;
}