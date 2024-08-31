#include <stdio.h>

int main() {
    float S;

    printf("Tarifa\n\n");

    printf("Saldo: "); scanf("%f", &S);

    if (S>=1000 && S<3000){
        S=S*1.8;
    }else if (S>=3000 && S<5000){
        S=S*1.75;
    }else if (S>=5000){
        S=S*1.7;
    }

    printf("\nSaldo final %.2f\n", S);

    return 0;
}