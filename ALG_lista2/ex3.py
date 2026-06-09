def pesq_bin(arr, tam_vetor, target):
    inicio = 0
    fim = tam_vetor - 1

    while(inicio <= fim):
        meio = inicio + (fim - inicio) // 2

        if arr[meio] == target:
            return meio
        elif arr[meio] > target:
            fim = meio - 1
        else:
            inicio = meio + 1
    return -1

tam_vetor = int(input("Qual o tamanho do vetor: "))
arr = [0]*tam_vetor

for i in range(tam_vetor):
    arr[i] = int(input())

target = int(input("Qual elemento deseja saber o indice: "))

posicao = pesq_bin(arr, tam_vetor, target)

if posicao == -1:
    print("Elemento nao encontrado")
else:
    print(f"Elemento encontrado na posicao: {posicao}")