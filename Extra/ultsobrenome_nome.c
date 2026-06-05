#include <stdio.h>
#include <string.h>

int main(){

    char nome[60];
    char referencia[10][30];
    int i, j;
    char * tok;

    printf("Informe seu nome: ");
    scanf("%59[^\n], nome");

    if(strlen(nome) == 0){
        printf("Erro! String vazia!z\n");
        return 1;
    }

    tok = strtok(nome, " ");

    for(i = 0; tok != NULL; i++){
        strcpy(referencia[i], tok);
        tok = strtok(NULL, " ");
    }

    printf("%s, ", referencia[i - 1]);
    for(j = 0; j < i; j++){
        printf("%s ", referencia[j]);
    }

    return 0;
}