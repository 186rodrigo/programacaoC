#include <stdio.h>

int main(){
    int idade;
    int quantidade = 1;
    float altura = 1.75;
    double peso = 90.3;
    char letra = 'A';
    char nome[20] = "sergio";

    idade = 25;
    quantidade = 10;

    printf("Idade: %d anos\n", idade);
    printf("Quantidade: %d anos\n", quantidade);
    printf("Altura: %.2f metros\n", altura);
    printf("Peso: %.2f kilos\n", peso);
    printf("Inicial do Nome: %c\n", letra);
    printf("Nome: %s\n", nome);
 
    return 0;

}