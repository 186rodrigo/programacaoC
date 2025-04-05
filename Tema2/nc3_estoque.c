#include <stdio.h>
int main (){
    float estoque = 5;

    printf ("Estoque atual é de: %.0f\n", estoque);
    printf ("Informe a Nova Quantidade de Estoque:\n");
    scanf ("%f", &estoque);

    if (estoque >= 5) {
     printf("O produto é caro\n");
    } else {
     printf("O produto é barato\n");}

return 0;
}