num = [0]*5

for i in range(len(num)):
    num[i] = int(input())

tam = len(num)

for i in range(tam-1, -1, -1):
    print(num[i], end=" ")