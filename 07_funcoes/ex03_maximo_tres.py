"""
Exercicio 03
Tema: 07_funcoes
"""

def maior(arr):
    maior = arr[0]

    for i in range(1, 3):
        if arr[i] > maior:
            maior = arr[i]
    return maior

arr = [0]*3

for i in range(3):
    arr[i] = int(input())

print(maior(arr))
