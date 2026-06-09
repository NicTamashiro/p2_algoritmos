nome = input("Informe seu nome: ")

partes = nome.split()
tamanho = len(partes)

print(partes[tamanho - 1] + ",", end = " ")

for i in range(tamanho - 1):
    print(partes[i], end = " ")

