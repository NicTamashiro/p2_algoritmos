/* Exercício 3 — C
   Leia um nome, copie para outra variável com strcpy()
   e exiba as duas confirmando que são independentes. */

#include <stdio.h>
#include <string.h>

int main(){

   char nome[50], copia[50];

   scanf("%s", nome);
   strcpy(copia, nome);

   printf("Original: %s\n", nome);
   printf("Copia: %s\n", copia);

   return 0;
}