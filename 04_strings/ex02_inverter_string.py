"""
Exercicio 02
Tema: 04_strings
"""

def inverter(nome):
    letras = list(nome)
    inicio = 0
    fim = len(nome) - 1

    while inicio < fim:
        letras[inicio], letras[fim] = letras[fim], letras[inicio]
        inicio += 1
        fim -= 1
    
    return "".join(letras)

nome = "Nicolas"

inverter(nome)
