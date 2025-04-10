#include <stdio.h>

int main() {
    int variavel;

    printf("Digite um valor:");
    scanf("%d", &variavel);

    switch (variavel)
    {
    case 1:
        printf("Código a ser executado se variavel == 1\n");
        printf("Teste do case 1\n");
        // Código a ser executado se variavel == valor1
        /* code */
        break;
    case 2:
    printf("Código a ser executado se variavel == 2\n");
        // Código a ser executado se variavel == valor1
        /* code */
        break;    
    default:
        printf("Código a ser executado se variavel não for 1 ou 2\n");
        // Código a ser executado se nenhum dos casos acima for verdadeiro
    }
}