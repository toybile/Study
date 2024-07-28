#include <stdio.h>

int main ()
{
    float A, B, C;
    
    printf("Trocando valores\n\n");
    
    printf("--Valores decimais devem ser digitados com (.)!--\n");
    
    printf("1º Valor: "); scanf("%f", &A);
    printf("2º Valor: "); scanf("%f", &B);
    
    C=0;
    
    C=A;
    A=B;
    B=C;
    
    printf("\nValor 1: %.2f\nValor 2: %.2f\n", A, B);
}