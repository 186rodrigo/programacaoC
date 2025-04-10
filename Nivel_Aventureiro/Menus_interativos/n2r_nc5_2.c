#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int opcao, regras;
    int numeroSecreto, palpite;

    printf("Menu Principal\n");
    printf("1. Iniciar jogo\n");
    printf("2. Ver Regras\n");
    printf("3. Sair\n");
    printf("Escolha uma das opções: ");
    scanf("%d", &opcao);

    switch (opcao)
    {
    case 1:
        printf("Execução do jogo\n");
        srand(time(0));
        numeroSecreto = rand() % 10;
        printf("Número secreto %d\n", numeroSecreto);
        printf("Digite um Número de 0 a 9: ");
        scanf("%d", &palpite);
            if (numeroSecreto == palpite)
        {
            printf("Você Acertou!\n");
        }   else {
            printf("Você Errou!\n");
            printf("Número Secrero %d\n", numeroSecreto);
        }
        break;    
    case 2:
        printf("As regras são......\n");
        printf("Digite a opção relacionada as regras do jogo!\n");
        printf("Regra 1\n");
        printf("Regra 2\n");
        scanf("%d", &regras);
        switch (regras)
        {
        case 1:
            printf("Regra 1\n");
            break;
        case 2:
            printf("Regra 2\n");
                break;
        default:
            break;
        }
        break;
    case 3:
        printf("Saindo do Jogo.....\n");
        break;       
    default:
        printf("Opção Inválida\n");
        break;
    }
}