# 📚 Guia de Estudos — Prova de Algoritmos

> Tópicos: Insertion Sort · Pesquisa Binária · Recursividade · Strings · Vetores · Matrizes · Funções

---

## 📂 Estrutura dos Arquivos

```
exercicios_algoritmos.txt   → Todos os exercícios com enunciados detalhados
README.md                   → Este guia de estudos e resumos teóricos
```

---

## 1. 🔢 Insertion Sort

### Conceito
O Insertion Sort percorre o vetor da esquerda para a direita. Para cada elemento, ele o "encaixa" na posição correta dentro da parte já ordenada à sua esquerda, como organizar cartas na mão.

### Complexidade
| Caso       | Tempo   | Espaço |
|------------|---------|--------|
| Melhor     | O(n)    | O(1)   |
| Médio      | O(n²)   | O(1)   |
| Pior       | O(n²)   | O(1)   |

### Pseudocódigo
```
para i de 1 até n-1:
    chave = vetor[i]
    j = i - 1
    enquanto j >= 0 e vetor[j] > chave:
        vetor[j+1] = vetor[j]
        j = j - 1
    vetor[j+1] = chave
```

### Dicas para a Prova
- O vetor[0..i-1] está SEMPRE ordenado a cada passo
- Ao contrário do Bubble Sort, não faz trocas — faz **deslocamentos**
- É estável (não troca elementos iguais de posição)
- Eficiente para vetores **quase ordenados**

---

## 2. 🔍 Pesquisa Binária

### Conceito
Divide o espaço de busca ao meio a cada passo. Só funciona em **vetores ordenados**. A cada iteração, descarta metade do vetor.

### Complexidade
| Caso   | Tempo     |
|--------|-----------|
| Melhor | O(1)      |
| Médio  | O(log n)  |
| Pior   | O(log n)  |

### Pseudocódigo (Iterativo)
```
inicio = 0
fim = n - 1
enquanto inicio <= fim:
    meio = (inicio + fim) / 2
    se vetor[meio] == alvo: retorna meio
    se vetor[meio] < alvo:  inicio = meio + 1
    senão:                  fim = meio - 1
retorna -1
```

### Dicas para a Prova
- **PRÉ-REQUISITO:** vetor ordenado
- Cuidado com o cálculo de `meio` — use `(inicio + fim) / 2`
- A versão recursiva tem o mesmo O(log n), mas usa pilha de chamadas
- Se o vetor tiver n=1.000.000, a busca binária faz no máximo ~20 comparações

---

## 3. 🔄 Recursividade

### Conceito
Uma função é recursiva quando chama a si mesma. Toda recursão precisa de:
1. **Caso base** — condição de parada (sem ela → loop infinito / stack overflow)
2. **Caso recursivo** — chamada com problema menor

### Regra de Ouro
> "Confie que a recursão resolve o problema menor. Você só precisa combinar."

### Exemplos Clássicos
```
fatorial(n):
    se n == 0: retorna 1
    retorna n * fatorial(n-1)

fibonacci(n):
    se n <= 1: retorna n
    retorna fibonacci(n-1) + fibonacci(n-2)

soma_vetor(v, n):
    se n == 0: retorna 0
    retorna v[n-1] + soma_vetor(v, n-1)
```

### Dicas para a Prova
- Sempre identifique o caso base PRIMEIRO
- Trace a pilha de chamadas para entender a execução
- Recursão de cauda: a chamada recursiva é a última operação
- Fibonacci recursivo tem complexidade O(2ⁿ) — muito ineficiente!

---

## 4. 🔤 Strings

### Operações Fundamentais
| Operação         | C (manual)                      | Conceito             |
|------------------|---------------------------------|----------------------|
| Comprimento      | percorrer até `\0`              | Contar caracteres    |
| Comparar         | comparar char a char            | Igualdade            |
| Copiar           | copiar char a char até `\0`     | Duplicação           |
| Concatenar       | appender após o `\0`            | União                |
| Inverter         | trocar extremos, convergindo    | Espelhamento         |
| Palíndromo       | comparar com invertida          | Simetria             |

### Dicas para a Prova
- Em C, strings terminam com `\0` (caractere nulo)
- `'A'` é maiúsculo, `'a'` é minúsculo; diferença ASCII = 32
- Para converter maiúsculo → minúsculo: `c + 32` (ou `c | 32`)
- Contar vogais: verificar se o char está em `{'a','e','i','o','u'}`

---

## 5. 📦 Vetores (Arrays)

### Conceito
Estrutura de dados linear, contígua na memória, acesso O(1) por índice.

### Operações Comuns
- **Busca linear:** percorrer do índice 0 ao n-1 → O(n)
- **Busca binária:** vetor ordenado, divide ao meio → O(log n)
- **Inserção no fim:** O(1) amortizado
- **Inserção no meio:** desloca elementos → O(n)
- **Remoção:** desloca elementos → O(n)

### Dicas para a Prova
- Índice vai de `0` até `n-1`
- Cuidado com **off-by-one errors** (erros de ±1 no índice)
- Para encontrar maior/menor: inicialize com `vetor[0]`
- Para inverter: use dois ponteiros (início e fim, convergindo)

---

## 6. 🔲 Matrizes

### Conceito
Array bidimensional. Uma matriz M[L][C] tem L linhas e C colunas.

### Percursos Importantes
```
// Percorrer todos os elementos
para i de 0 até L-1:
    para j de 0 até C-1:
        processar M[i][j]

// Diagonal principal (só matriz quadrada, L == C)
para i de 0 até n-1:
    processar M[i][i]

// Diagonal secundária
para i de 0 até n-1:
    processar M[i][n-1-i]

// Transposta
para i de 0 até n-1:
    para j de i+1 até n-1:
        trocar M[i][j] com M[j][i]
```

### Dicas para a Prova
- Linha `i`, coluna `j`: M[i][j]
- A transposta troca linhas por colunas
- Simetria: M[i][j] == M[j][i] para toda posição

---

## 7. ⚙️ Funções

### Conceito
Blocos de código reutilizáveis com entradas (parâmetros) e saída (retorno).

### Passagem de Parâmetros
| Tipo             | Modifica original? | Uso                          |
|------------------|--------------------|------------------------------|
| Por valor        | Não                | Tipos simples (int, float)   |
| Por referência/ponteiro | Sim       | Vetores, matrizes, structs   |

### Boas Práticas
- Uma função deve fazer **uma coisa** só
- Nome deve descrever a ação: `calculaMedia`, `inverteVetor`
- Sempre valide os parâmetros de entrada quando necessário

---

## 📋 Checklist de Revisão

Antes da prova, certifique-se de que consegue:

- [ ] Implementar Insertion Sort do zero e rastrear passo a passo
- [ ] Implementar Pesquisa Binária iterativa e recursiva
- [ ] Escrever funções recursivas com caso base correto
- [ ] Manipular strings: inverter, palíndromo, contar vogais/consoantes
- [ ] Encontrar maior, menor, média e soma em vetores
- [ ] Percorrer matrizes: linhas, colunas, diagonal, transposta
- [ ] Criar funções com parâmetros por valor e por referência

---

## 💡 Dicas Gerais para a Prova

1. **Leia o enunciado inteiro** antes de começar a codificar
2. **Trace exemplos pequenos** à mão antes de generalizar
3. **Casos de borda:** vetor vazio, n=1, todos iguais, já ordenado, inversamente ordenado
4. **Comente o código** — ajuda a organizar o raciocínio e a ganhar pontos parciais
5. **Nomeie bem as variáveis** — `i`, `j` para índices; `aux` para temporários; nomes descritivos para o resto

---

*Bons estudos e boa prova! 🚀*
