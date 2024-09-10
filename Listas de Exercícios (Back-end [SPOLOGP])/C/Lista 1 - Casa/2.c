#include <stdio.h>

int main()
{
    float R, D;
    
    printf("Conversor: Dólar -> Real\n\n");
    
    printf("--Valores decimais devem ser digitados com (.)!--\n");

    printf("Valor ($): "); scanf("%f", &D);
    
    R=D*2.40;
    
    printf("\nValor: R$%.2f\n", R);
}