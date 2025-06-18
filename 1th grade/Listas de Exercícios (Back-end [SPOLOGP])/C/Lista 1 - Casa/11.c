#include <stdio.h>

int main ()
{
    float A, B;
    
    printf("Trocando valores (sem uma 3ª variável)\n\n");
    
    printf("--Valores decimais devem ser digitados com (.)!--\n");
    
    printf("1º Valor: "); scanf("%f", &A);
    printf("2º Valor: "); scanf("%f", &B);
    
    A=B+A;
    B=A-B;
    A=A-B;
    
    printf("\nValor 1: %.2f\nValor 2: %.2f\n", A, B);
}