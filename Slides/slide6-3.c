#include <stdio.h>
#include <string.h>

int main(){

    char nome[51];
    char partes[3][51];
    int i,j;
    char * tok;

    scanf(" %50[^\n]", nome);

    tok = strtok(nome, " ");

    for(i = 0; tok != NULL; i++){
        strcpy(partes[i], tok);
        tok = strtok(NULL, " ");
    }

    printf("%s, ", partes[i - 1]);
    for(j = 0; j < i - 1; j++){
        printf("%s ", partes[j]);
    }

    return 0;
}