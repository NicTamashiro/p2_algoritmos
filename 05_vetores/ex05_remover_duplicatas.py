"""
Exercicio 05
Tema: 05_vetores
"""

def remover_duplicadas(v):
    resultado = []

    for elemento in v:
        if elemento not in resultado:
            resultado.append(elemento)
    
    return resultado

v = [1,1,2,3,3,4]
v = remover_duplicadas(v)

print(f"Tamanho: {len(v)}")
print(f"Vetor: {v}")

