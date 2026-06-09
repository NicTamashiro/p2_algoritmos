def comparar(n1, n2):
    if n1 == n2:
        print("Iguais!")
    elif n1 > n2:
        print(n1)
    else:
        print(n2)


n1, n2 = map(int, input().split())

comparar(n1, n2)