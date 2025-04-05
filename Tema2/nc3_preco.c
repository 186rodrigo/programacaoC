#include <stdio.h>
int main (){
    float preco = 100;

    printf ("Informe o Valor:\n");
    scanf ("%f", &preco);

    if (preco >= 100) {
     printf("O produto é caro\n");
    } else {
     printf("O produto é barato\n");}

return 0;
}