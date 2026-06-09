a = [0]*10

for i in range(10):
    a[i] = int(input())

x = int(input())

b = [0]*10

for i in range(10):
    b[i] = a[i]*x


print(b)