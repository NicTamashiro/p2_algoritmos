def matriz_quadrada(lin, col):
    if lin == col: 
        return 1
    return 0

def calcula_diagonal(lin, col, matriz):
    soma = 0

    for i in range(lin):
        soma += matriz[i][i]
    
    print(f"Soma das diagonais = {soma}")


lin, col = map(int, input("Digite a qtd de linhas e colunas: ").split())

quadrada = matriz_quadrada(lin, col)

matriz = [[0]*col for i in range(lin)]

for i in range(lin):
    for j in range(col):
        matriz[i][j] = int(input())

calcula_diagonal(lin, col, matriz)