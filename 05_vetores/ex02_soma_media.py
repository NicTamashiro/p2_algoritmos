"""
Exercicio 02
Tema: 05_vetores
"""

def soma(arr, tamanho):
    soma = 0

    for i in range(0, tamanho):
        soma += arr[i]
    
    return soma

def media(arr, tamanho):
    return soma(arr, tamanho) / tamanho

arr = [2.0, 4.0, 6.0]

print(f"Soma = {soma(arr, len(arr)):.2f}")
print(f"Media = {media(arr, len(arr)):.2f}")