#include <stdio.h>

int main()
{
    float R, D;
    
    printf("Conversor: Real -> Dólar\n\n");
    
    printf("--Valores decimais devem ser digitados com (.)!--\n");

    printf("Valor (R$): "); scanf("%f", &R);
    
    D=R/2.40;
    
    printf("\nValor: $%.2f\n", D);
}