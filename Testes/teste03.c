#include <stdio.h>

int main() {
    int lado_a, lado_b, lado_c;

    printf("Informe o primeiro lado do triângulo: ");
    scanf("%d", &lado_a);

    printf("Informe o segundo lado do triângulo: ");
    scanf("%d", &lado_b);

    printf("Informe o terceiro lado do triângulo: ");
    scanf("%d", &lado_c);

    if (lado_a == lado_b && lado_a == lado_c) {
        printf("\nCaso 1\n"); // Triângulo equilátero
    } else {
        if (lado_a == lado_b || lado_b == lado_c || lado_c == lado_a) {
            printf("\nCaso 2\n"); // Triângulo isósceles
        } else {
            printf("\nCaso 3\n"); // Triângulo escaleno
        }
    }

    return 0;
}