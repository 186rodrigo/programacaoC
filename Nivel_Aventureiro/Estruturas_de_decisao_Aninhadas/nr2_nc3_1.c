#include <stdio.h>

int main() {
    int idade;
    float renda;

    printf("Digite a sua Idade: ");
    scanf("%d", &idade);
    printf("Digite a sua Renda Mensal: ");
    scanf("%f", &renda);

    if (idade > 60 || idade < 18)
    {
        if (renda < 2000) 
        {
        printf("Você tem direito ao desconto\n");
    } else {
        printf("Você não tem direito ao desconto devido à renda\n");
        }
    } else {
        printf("Você não tem direito ao desconto devido à idade\n");
    } 
}