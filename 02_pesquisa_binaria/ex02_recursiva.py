"""
Exercicio 02
Tema: 02_pesquisa_binaria
"""

def bin_search(arr, inicio, fim, target):
    if inicio > fim:
        return -1
    
    meio = inicio + (fim - inicio) // 2

    if arr[meio] == target: 
        return meio
    elif arr[meio] > target:
        return bin_search(arr, inicio, meio - 1, target)
    else:
        return bin_search(arr, meio + 1, fim, target)

arr = [1,3,5,8,12,43,57]
tamanho = len(arr)
target = 5

posicao = bin_search(arr, 0, tamanho - 1, target)

if posicao == -1:
    print("Elemento nao encontrado")
else:
    print("Elemento encontrado na posicao:", posicao)