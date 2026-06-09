#include <stdio.h>

void adicionarCarro(int estacionamento[2][10]){
    int andar, vaga;

    printf("\nQual andar e vaga deseja adicionar seu carro: \n");
    scanf("%d %d", &andar, &vaga);

    if(estacionamento[andar][vaga] == 1){
        printf("Esta vaga ja esta preenchida\n");
        return;
    } else {
        estacionamento[andar][vaga] = 1;
    }
}

void removerCarro(int estacionamento[2][10]){
    int andar, vaga;

    printf("\nQual andar e vaga deseja remover seu carro: \n");
    scanf("%d %d", &andar, &vaga);

    if(estacionamento[andar][vaga] == 0){
        printf("Nao tem nenhum carro nessa vaga\n");
    } else {
        estacionamento[andar][vaga] = 0;
    }
}

void vagasPorAndar(int estacionamento[2][10]){
    int andar;
    int qtd = 0;

    printf("Qual andar: ");
    scanf("%d", &andar);

    for(int i = 0; i < 10; i++){
        if(estacionamento[andar][i] == 0){
            printf("[%d] livre\n", i);
            qtd++;
        }
    }
    printf("\nQuantidade = %d\n", qtd);
}

void vagasEstacionamento(int estacionamento[2][10]){
    int total = 0;

    printf("Andar '0'\n");
    for(int i = 0; i < 10; i++){
        if(estacionamento[0][i] == 0){
            printf("[%d] livre\n", i);
            total++;
        }
    }

    printf("\nAndar '1'\n");
    for(int i = 0; i < 10; i++){
        if(estacionamento[1][i] == 0){
            printf("[%d] livre\n", i);
            total++;
        }
    }
    printf("\nVagas totais = %d\n", total);
}

int main(){

    int estacionamento[2][10] = {0};
    int opcao;

    do {
        printf("1 - adicionar carro\n");
        printf("2 - remover carro\n");
        printf("3 - vagas por andar\n");
        printf("4 - vagas estacionamento\n");
        printf("0 - sair\n");

        printf("\nEscolha uma opcao: ");
        scanf("%d", &opcao);

        switch (opcao){
            case 1:
                adicionarCarro(estacionamento);
                break;

            case 2:
                removerCarro(estacionamento);
                break;

            case 3:
                vagasPorAndar(estacionamento);
                break;

            case 4:
                vagasEstacionamento(estacionamento);
                break;

            case 0:
                printf("\nEncerrando sistema\n");
                break;

            default:
                printf("Opcao invalida\n");
                return 1;
        }

    } while (opcao != 0);

    return 0;
}