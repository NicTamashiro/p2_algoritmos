nome = input("Informe seu nome: ")

referencia = nome.split()
tam = len(referencia)

if(tam == 0):
    print("Erro! String vazia!")
    exit(1)

print(referencia[tam - 1] + ",", end = " ")

for i in range(0, tam - 1):
    print(referencia[i], end = " ")