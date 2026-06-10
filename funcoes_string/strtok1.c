/* Exercício 5 — C
   Leia uma frase e use strtok() para separar e
   imprimir cada palavra em uma linha diferente,
   usando o espaço como delimitador. */

#include <stdio.h>
#include <string.h>

int main(){

   char frase[101];
   char partes[10][30];
   char * tok;
   int contador = 0;

   scanf("%100[^\n]", frase);

   tok = strtok(frase, " ");

   for(int i = 0; tok != NULL; i++){
      strcpy(partes[i], tok);
      contador++;
      tok = strtok(NULL, " ");
   }

   for(int i = 0; i < contador; i++){
      printf("Palavra '%d': %s\n", i,partes[i]);
   }

   return 0;
}