"""
Exercicio 04
Tema: 05_vetores
"""

def inverting_arr(arr, size):
    start = 0
    end = size - 1

    for i in range(0, size//2):
        temp = arr[start]
        arr[start] = arr[end]
        arr[end] = temp

        start += 1
        end -= 1

arr = [1,2,3,4,5]

inverting_arr(arr, len(arr))

print(arr)