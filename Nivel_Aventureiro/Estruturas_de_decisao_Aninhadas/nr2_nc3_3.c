#include <stdio.h>

int main() {
    int numero;

    printf("Digite um numero: ");
    scanf("%d", &numero);

    if (numero > 0){
        if (numero % 2 == 0)
        {
            printf("Número Par\n");
        } else {
            printf("Número Impar\n");
        }
        
        printf("Número positivo\n");
    } else if (numero == 0) {
        printf("Número é zero\n");
    }    else {
            printf("Número é negativo\n");
    }
    

return 0;
}
