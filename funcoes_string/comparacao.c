/* Exercício 2 — C
   Leia duas strings e informe se são iguais ou
   diferentes usando strcmp(). */


#include <stdio.h>
#include <string.h>

int main(){

   char str1[30], str2[30];

   scanf("%s %s", str1, str2);

   if(strcmp(str1, str2) == 0){
      printf("Sao iguais!\n");
   } else {
      printf("Sao diferentes!\n");
   }

   return 0;
}