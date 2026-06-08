/*
Exercicio 01
Tema: 04_strings
*/

#include <stdio.h>

int comprimento(char * string){
    int contador = 0;
    int i = 0;
    while(string[i] != '\0') {
        contador++;
        i++;
    }
    return contador;
}

int main() {

    char string[100];

    scanf("%s", string);

    int tamanho = comprimento(string);

    printf("Tamanho da string: %d\n", tamanho);

    return 0;
}
