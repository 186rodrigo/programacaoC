/*#include <stdio.h>
 
// Função genérica para entrada de dados
void entradaDados() {
    // código para a função entradaDados
}
 
// Função genérica para cálculo da média
float calcularMedia() {
    // código para a função calcularMedia
}
 
// Função genérica para exibir dados
void exibirMedia() {
    // código para a função exibirMedia
}
 
int main() {
    double media;
 
    entradaDados();
    media = calcularMedia();
    exibirMedia();
 
    return 0;
}
*/
#include <stdio.h>

int main() {
    int numero;

    // Solicitar ao usuário um número
    printf("Digite um número: ");
    scanf("%d", &numero);

    // Verificar se o número é divisível por 2
    if (numero % 2 == 0) {
        printf("O número é par\n");
    } else {
        printf("O número é ímpar\n");
    }

    return 0;
}
