"""
Exercicio 03
Tema: 05_vetores
"""

def busca_linear(arr, tamanho, target):
    for i in range(0, tamanho):
        if arr[i] == target:
            return i
    return -1

arr = [5,3,8,1,7]
target = 8

resultado = busca_linear(arr, len(arr), target)

if resultado == -1:
    print("Elemento nao encontrado")
else:
    print(f"Elemento '{target}' encontrado na posicao {resultado}")
