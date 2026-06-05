def soma(lin, col, matriz):
    soma = 0
    contador = 0

    for i in range(0, lin):
        for j in range(contador, i + 1):
            soma += matriz[i][j]
        contador+=1
    
    return soma


print("Digite o numero de linhas e colunas:")
lin,col = map(int, input().split());

if(lin != col):
    print("Matriz nao eh quadrada.")
else:
    matriz = [[0 for i in range(lin)] for j in range(col)]
    
    for i in range(0,lin):
        for j in range(0,col):
            matriz[i][j] = int(input())
    
    resultado = soma(lin, col, matriz)

    print(f"Soma = {resultado}")