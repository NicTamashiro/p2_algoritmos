def calcula_media(notas):
    soma = 0

    for n in notas:
        soma += n
    
    return soma / 4


notas = [0.0]*4

for i in range(len(notas)):
    notas[i] = float(input())

media = calcula_media(notas)

print(f"Media = {media:.2f}")