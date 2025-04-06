#include <stdio.h>
int main() {
    char nome[100];
    printf("Digite seu nome completo: ");
    scanf("%99[^\n]", nome); // Captura o nome completo incluindo espaços
    printf("Seu nome é: %s\n", nome);
    return 0;
}
