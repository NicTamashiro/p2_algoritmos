#include <stdio.h>

float calc_media(float * notas){
    float soma = 0;
    for(int i = 0; i < 4; i++){
        soma += notas[i];
    }

    return soma / 4;
}

int main(){

    float notas[4];

    printf("Digite 4 valores para saber a media:\n");
    for(int i = 0; i < 4; i++){
        scanf("%f", &notas[i]);
    }

    float media = calc_media(notas);

    printf("Media = %.2f\n", media);

    return 0;
}