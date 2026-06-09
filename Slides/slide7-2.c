#include <stdio.h>

float calcula_media(float * notas){
    float soma = 0;

    for(int i = 0; i < 4; i++){
        soma += notas[i];
    }

    return soma / 4;
}

int main(){

    float notas[4];

    for(int i = 0; i < 4; i++){
        scanf("%f", &notas[i]);
    }

    float media = calcula_media(notas);

    printf("Media = %.2f\n", media);

    return 0;
}