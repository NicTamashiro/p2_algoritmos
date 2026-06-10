/* Exercício 6 — C
   Leia uma frase e use strtok() para contar
   quantas palavras ela contém. */

#include <stdio.h>
#include <string.h>

int main(){

   char frase[51];
   scanf("%50[^\n]", frase);

   int contador = 0;
   char * tok;

   tok = strtok(frase, " ");

   for(int i = 0; tok != NULL; i++){
      contador++;
      tok = strtok(NULL, " ");
   }

   printf("Quantidade = %d\n", contador);

   return 0;
}