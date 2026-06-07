"""
Exercicio 01
Tema: 02_pesquisa_binaria
"""

def bin_search(arr, tamanho, target):
    inicio = 0
    fim = tamanho - 1

    while inicio <= fim:
        meio = inicio + (fim - inicio) // 2

        if arr[meio] == target:
            return meio
        elif arr[meio] > target:
            fim = meio - 1
        else:
            inicio = meio + 1

arr = [2,5,8,12,16,23,38,56,72,91]
target = 23

resultado = bin_search(arr, len(arr), target)

if resultado == -1:
    print("Elemento nao encontrado")
else:
    print(f"numero {target} encontrado na posicao: {resultado}")
