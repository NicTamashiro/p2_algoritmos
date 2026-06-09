"""
Exercicio 01
Tema: 07_funcoes
"""

def somar(n1, n2, op):
    print(f"{n1} + {n2} = {n1+n2}")
def subtrair(n1, n2, op):
    print(f"{n1} - {n2} = {n1-n2}")
def multiplicar(n1, n2, op):
    print(f"{n1} * {n2} = {n1*n2}")
def dividir(n1, n2, op):
    if n2 == 0:
        print("Nao pode dividir numero por '0'")
        return
    print(f"{n1} / {n2} = {n1/n2}")

n1 = int(input("Digite o primeiro numero: "))
op = input("Digite a operacao: ")
n2 = int(input("Digite o segundo numero: "))

match op:
    case '+':
        somar(n1,n2,op)
        
    case '-':
        subtrair(n1,n2,op)
        
    case '*':
        multiplicar(n1,n2,op)
        
    case '/':
        dividir(n1,n2,op)
        
    case _:
        print("Operacao invalida!")
