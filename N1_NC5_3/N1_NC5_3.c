#include <stdio.h>

int main(){
    int idade;
    float altura;
    char opcao;
    char nome[50];
    printf("Digite a sua idade: ");
    scanf("%d", &idade);
    printf("A idade é: %d\n", idade);

    printf("Digite a sua altura: ");
    scanf("%f", &altura);
    printf("A altura é: %f\n", altura);

    printf("Digite a Opcao: ");
    scanf(" %c", &opcao);
    printf("Opcao é: %c\n", opcao);

    printf("Digite seu nome: ");
 //   fgets(nome, 50, stdin);
 //   nome[strcspn(nome, "\n")] = 0;
    scanf("%s", nome);
    printf("Seu Nome : %s\n", nome);

    return 0;

}
