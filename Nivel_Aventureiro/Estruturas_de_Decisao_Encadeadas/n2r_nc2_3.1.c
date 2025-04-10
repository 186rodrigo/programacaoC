#include <stdio.h>

int main(){

    int nota;

    printf("Digite a sua Nota: ");
    scanf("%d", &nota);
    //A >= 90
    //B >= 80
    //C >= 70
    //D >= 60
    //E >= 50
    //F
    if (nota < 50)
    {printf("Conceito é F!\n");}
    else if (nota >= 50 && nota < 60)
    {printf("Conceito é E!\n");}
    else if (nota >= 60 && nota < 70)
    {printf("Conceito é D!\n");}
    else if (nota >= 70 && nota < 80)
    {printf("Conceito é C!\n");}
    else if (nota >= 80 && nota < 90)
    {printf("Conceito é B!\n");}
    else
    {printf("Conceito é A!\n");}

return 0;
}