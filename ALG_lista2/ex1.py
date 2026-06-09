import math

num = [0.0]*10
soma_num = 0
soma_quadrado = 0

tamanho = len(num)

for i in range(tamanho):
    num[i] = float(input())
    soma_num += num[i]

media = soma_num / tamanho

for i in range(tamanho):
    diff = num[i] - media
    soma_quadrado += diff * diff

print(f"{math.sqrt(soma_quadrado / tamanho):.3f}")