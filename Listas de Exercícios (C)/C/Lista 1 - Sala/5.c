#include <stdio.h>

int main()
{
    int I;
    
    printf("Quadrado de um número inteiro\n\n");
    
    printf("Número inteiro: "); scanf("%d", &I);
    
    I=I*I;
    
    printf("\nQuadrado do número inteiro: %.2d\n", I);
}