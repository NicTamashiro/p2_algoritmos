"""
Exercicio 01
Tema: 03_recursividade
"""

def fatorial(n):
    if n == 1:
        return 1
    else:
        return n * fatorial(n - 1)

n = 5
print(fatorial(n))
