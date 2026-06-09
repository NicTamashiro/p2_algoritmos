"""
Exercicio 02
Tema: 07_funcoes
"""

def ehimpar(n):
    if n % 2 != 0:
        return 1
    else:
        return 0
    
def ehpar(n):
    if n % 2 == 0:
        return 1
    else:
        return 0

n = int(input("Digite um numero para saber se eh 'par' ou 'impar': "))

if ehpar(n) == 1:
    print(f"'{n}' eh par")
else:
    print(f"'{n}' eh impar")

