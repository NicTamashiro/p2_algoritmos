def adicionarCarro(estacionamento):
    andar = int(input("Andar: "))
    vaga = int(input("Vaga: "))

    if estacionamento[andar][vaga] == 1:
        print("Esta vaga ja esta preenchida\n");
        return
    else:
        estacionamento[andar][vaga] = 1

def removerCarro(estacionamento):
    andar = int(input("Andar: "))
    vaga = int(input("Vaga: "))

    if estacionamento[andar][vaga] == 0:
        print("Esta vaga ja esta vazia\n");
        return
    else:
        estacionamento[andar][vaga] = 0

def vagasPorAndar(estacionamento):
    qtd = 0

    andar = int(input("Qual o andar: "))

    for i in range(10):
        if estacionamento[andar][i] == 0:
            print(f"[{i}] vaga livre")
            qtd += 1
    print(f"Total = {qtd}")

def vagasEstacionamento(estacionamento):
    total = 0

    print("Andar '0'");
    for i in range(10):
        if estacionamento[0][i] == 0:
            print(f"[{i}] livre")
            total += 1

    print("Andar '1'");
    for i in range(10):
        if estacionamento[1][i] == 0:
            print(f"[{i}] livre")
            total += 1
    
    print(f"\nVagas livres totais = {total}");

estacionamento = [[0]*10 for i in range(2)]

while True:
    print("1 - adicionar carro");
    print("2 - remover carro");
    print("3 - vagas por andar");
    print("4 - vagas estacionamento");
    print("0 - sair\n");

    opcao = int(input("Escolha uma opcao: "))

    match opcao:
        case 1:
            adicionarCarro(estacionamento)
        case 2:
            removerCarro(estacionamento)
        case 3:
            vagasPorAndar(estacionamento)
        case 4:
            vagasEstacionamento(estacionamento)
        case 0:
            print("Encerrando sistema")
            break
        case _:
            print("Opcao invalida!")
            break