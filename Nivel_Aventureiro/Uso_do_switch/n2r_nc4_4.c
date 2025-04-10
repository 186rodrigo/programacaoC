#include <stdio.h>

int main() {
    int dia;

    printf("Entre com valor do dia da semana:\n");
    scanf("%d", &dia);

    switch (dia) 
    {
    case 1:
        printf("Domingo\n");
        break;
    case 2:
        printf("Segunda-feira\n");
        break;
    case 3:
        printf("Terça-Feira\n");
        break;
    case 4:
        printf("Quarta-feira\n");
        break;
    case 5:
        printf("Quinta-Feira\n");
        break;
    case 6:
        printf("Sexta-feira\n");
        break;
    case 7:
        printf("Domingo\n");
        break;
    default:
    printf("Inválido\n");
        break;
    }
}