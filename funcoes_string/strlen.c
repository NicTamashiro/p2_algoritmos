/* Exercício 1 — C
   Leia uma palavra digitada pelo usuário e exiba
   quantas letras ela possui usando strlen(). */

#include <stdio.h>
#include <string.h>

int main(){

   char nome[50];
   scanf("%49[^\n]", nome);

   int tamanho = strlen(nome);

   printf("Tamanho = %d\n", tamanho);

   return 0;
}
