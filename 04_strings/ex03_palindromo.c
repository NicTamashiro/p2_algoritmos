/*
Exercicio 03
Tema: 04_strings
*/


#include <stdio.h>
#include <string.h>
#include <ctype.h>

int palindromo(char * string){
    int inicio = 0;
    int fim = strlen(string) - 1;

    while(inicio <= fim){
        if(tolower(string[inicio]) != tolower(string[fim])) {
            return 0;
        }
        inicio++;
        fim--;
    }
    return 1;
}

int main() {

    char string[51] = "Arara";

    int resultado = palindromo(string);

    if(resultado == 1){
        printf("Eh palindromo\n");
    } else {
        printf("Nao eh palindromo\n");
    }

    return 0;
}
