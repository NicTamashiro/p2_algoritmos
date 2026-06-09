/*
Exercicio 01
Tema: 07_funcoes
*/

#include <stdio.h>

void somar(int n1, int n2, char op){
    printf("%d + %d = %d\n", n1, n2, n1+n2);
}
void subtrair(int n1, int n2, char op){
    printf("%d - %d = %d\n", n1, n2, n1-n2);
}
void multiplicar(int n1, int n2, char op){
    printf("%d * %d = %d\n", n1, n2, n1*n2);
}
void dividir(int n1, int n2, char op){
    if(n2 == 0){
        printf("Nao se pode dividir por '0'\n");
        return;
    }
    printf("%d / %d = %d\n", n1, n2, n1/n2);
}   

int main() {

    int num1, num2;
    char op;

    printf("Digite o primeiro numero: ");
    scanf("%d", &num1);
    printf("Digite a operacao: ");
    scanf(" %c", &op);
    printf("Digite o segundo numero: ");
    scanf("%d", &num2);

    switch(op){
        case '+':
            somar(num1,num2,op);
            break;

            case '-':
            subtrair(num1,num2,op);
            break;

        case '*':
            multiplicar(num1,num2,op);
            break;

        case '/':
            dividir(num1,num2,op);
            break;
        
        default:
        printf("Operacao invalida!");
    }

    return 0;
}
