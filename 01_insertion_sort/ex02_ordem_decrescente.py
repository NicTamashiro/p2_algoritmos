"""
Exercicio 02
Tema: 01_insertion_sort
"""

def ordenar_crescente(arr, tamanho):
    for i in range(1, tamanho):
        temp = arr[i]
        j = i - 1

        while j >= 0 and arr[j] < temp:
            arr[j + 1] = arr[j]
            j -= 1
        arr[j + 1] = temp
    
arr = [3, 1, 7, 4]

ordenar_crescente(arr, len(arr))

print(arr)