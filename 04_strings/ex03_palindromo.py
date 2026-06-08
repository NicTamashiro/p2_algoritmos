"""
Exercicio 03
Tema: 04_strings
"""

def palindromo(string):
    inicio = 0
    fim = len(string) - 1

    while inicio <= fim:
        if string[inicio].lower() != string[fim].lower():
            return 0
        inicio += 1
        fim -= 1
    return 1

string = "Arara"

resultado = palindromo(string)

if resultado == 1:
    print("Eh palindromo")
else:
    print("Nao eh palindromo")
