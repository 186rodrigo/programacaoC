#include <stdio.h>

int main (){

    int idade;

    printf("Digite a sua idade: ");
    scanf("%d", &idade);

    //Criança < 12
    //Adolecente 12 <= x < 18
    //Adulto 18 <= x < 60
    //Idoso > 60

    if (idade >= 60) {
        printf("Você é um Idoso!\n");
    }   else if (idade < 60 && idade >= 18) {
        printf("Você é um Adulto!\n");
    }   else if (idade < 18 && idade >= 12) {
        printf("Você é um Adolecente!\n");
    }   else {printf("Você é uma Criança!\n"); 
    } 
                
return 0;
}