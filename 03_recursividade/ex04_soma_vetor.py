"""
Exercicio 04
Tema: 03_recursividade
"""

def soma(arr, tamanho):
    if tamanho == 0:
        return 0
    
    return arr[tamanho - 1] + soma(arr, tamanho - 1)

arr = [2,4,5,9]
tamanho = len(arr)

print("Soma =", soma(arr, tamanho))
