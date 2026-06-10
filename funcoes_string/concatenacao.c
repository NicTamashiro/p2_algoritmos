/* Exercício 4 — C
   Leia nome e sobrenome separadamente e concatene
   com strcat() para montar o nome completo. */

#include <stdio.h>
#include <string.h>

int main(){
   
   char nome[100], sobrenome[50];

   scanf("%s %s", nome, sobrenome);
   strcat(nome, " ");
   strcat(nome, sobrenome);

   printf("Nome completo: %s\n", nome);

   return 0;
}