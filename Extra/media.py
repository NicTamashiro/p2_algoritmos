def calc_media(notas):
    soma = 0
    for i in range(0, 4):
        soma += notas[i]
    
    return soma / 4

notas = [0.0]*4

print("Digite 4 numeros para saber a media:")
for i in range(0, 4):
    notas[i] = float(input())

media = calc_media(notas)

print(f"Media = {media:.2f}")