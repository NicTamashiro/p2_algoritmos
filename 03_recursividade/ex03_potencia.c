/*
Exercicio 03
Tema: 03_recursividade
*/

#include <stdio.h>

int potencia(int base, int exp){
    if (exp == 0) return 1;
    else if (exp == 1) return base;

    return base * potencia(base, exp - 1);
}

int main() {

    int base;
    int exp;

    printf("Digite a base e o expoente: \n");
    scanf("%d %d", &base, &exp);

    int resultado = potencia(base, exp);

    printf("%d^%d = %d\n", base, exp, resultado);

    return 0;
}

/*

    2^4

    2 * potencia(2, 3)
             2    *    potencia(2, 2)
                            2     *     potencia(2, 1)
                                                2

*/