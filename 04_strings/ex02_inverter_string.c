/*
Exercicio 02
Tema: 04_strings
*/

#include <stdio.h>
#include <string.h>

void inverter_str(char * string){
    int inicio = 0;
    int fim = strlen(string) - 1;

    for(int i = 0; i < strlen(string)/2; i++){
        char temp = string[inicio];
        string[inicio] = string[fim];
        string[fim] = temp;

        inicio++;
        fim--;
    }
}

int main() {

    char string[20] = "Nicolas";

    inverter_str(string);

    printf("%s", string);

    return 0;
}
