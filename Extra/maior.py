def maior(a, b):
    if a == b:
        print("Iguais!")
    elif a > b:
        print("'A' eh maior")
    else:
        print("'B' eh maior")

print("Digite dois numeros:")
a,b = map(int, input().split())

maior(a,b)