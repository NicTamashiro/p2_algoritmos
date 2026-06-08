"""
Exercicio 01
Tema: 05_vetores
"""

def maior(num, tamanho):
    maior = num[0]

    for i in range(1,tamanho):
        if num[i] > maior:
            maior = num[i]
        
    return maior

def menor(num, tamanho):
    menor = num[0]

    for i in range(1, tamanho):
        if num[i] < menor:
            menor = num[i]
    
    return menor


num = [3,7,1,9,4]

highest = maior(num, len(num))
worst = menor(num, len(num))

print(f"Maior = {highest}")
print(f"Menor = {worst}")
