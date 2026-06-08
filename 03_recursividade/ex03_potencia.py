"""
Exercicio 03
Tema: 03_recursividade
"""

def potencia(base, exp):
    if exp == 0:
        return 1
    elif exp == 1:
        return base
    
    return base * potencia(base, exp - 1)

base = int(input("Digite a base: "))
exp = int(input("Digite o expoente: "))

print(f"{base}^{exp} = {potencia(base, exp)}")
