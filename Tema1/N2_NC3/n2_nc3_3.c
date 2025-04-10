#include <stdio.h>

int main(){
    /*
    Incremento (++)
    Pré-Incremento ++a
    Pós-Incremento a++
    Decremento (--)
    Pré-Decremento --a
    Pós-Decremento a--
    */

    int numemero1 = 1, resultado;

    printf("Antes incremento: %d\n", numemero1);
    //numemero1 = numemero1 + 1;
    //numero1 += 1;
    //Pos incremento
    //resultado = numero1;
    //numemero1++;
    resultado = numemero1++;
    //printf("Após incremento: %d\n", numemero1);
    printf("Após Pós-incremento - Numero 1: %d - Resultado: %d\n", numemero1, resultado);

    resultado = ++numemero1;
    printf("Após Pré-incremento - Numero 1: %d - Resultado: %d\n", numemero1, resultado);    

    //numero1 = numemero1 - 1;
    //numero1 -= 1;
    //numemero1--;
    //printf("Após decremento: %d\n", numemero1);

    
    resultado = numemero1--;
    printf("Após Pós-decremento - Numero 1: %d - Resultado: %d\n", numemero1, resultado);

    resultado = --numemero1;
    printf("Após Pré-decremento - Numero 1: %d - Resultado: %d\n", numemero1, resultado);

    return 0;

}