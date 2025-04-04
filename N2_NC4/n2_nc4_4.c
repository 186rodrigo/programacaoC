#include <stdio.h>
 
int main() {
    int a = 10;
    int b = 3;
    float quociente = (float) a / b; // 'a' é explicitamente convertido para float
 
    printf("Quociente: %f\n", quociente);
 
    return 0;
}