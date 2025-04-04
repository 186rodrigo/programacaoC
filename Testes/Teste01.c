#include <stdio.h>

int main(void){
    int i;
    printf("F = ");
    scanf("%d",&i);

    switch (i) {
        case 0 : printf("Maca");
        break;
        case 10 : printf("Abacate");
        break;
        case 20 : printf("Banana");
        break;
        case 30 : printf("Pera");
        break;
        case 40 : printf("Uva");
        break;
        default : printf("Caju");
    }
    return 0;
}

