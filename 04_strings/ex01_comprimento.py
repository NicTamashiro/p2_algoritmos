"""
Exercicio 01
Tema: 04_strings
"""

def comprimento(string):
    contador = 0
    for caractere in string:
        contador += 1
    return contador

string = input("Digite uma string para saber o tamanho: ")
print(f"Tamanho da string: {comprimento(string)}")
