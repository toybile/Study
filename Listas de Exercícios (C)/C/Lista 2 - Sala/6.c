#include <stdio.h>
#include <math.h>

int main()
{
    float A, B, C, D, X1, X2;
    
    printf("Equação de 2º grau\n\n");
    
    printf("--Valores decimais devem ser digitados com (.)!--\n");
    
    printf("A: "); scanf("%f", &A);
    printf("B: "); scanf("%f", &B);
    printf("C: "); scanf("%f", &C);
    
    printf("\n");
    
    D=pow(B, 2.0)-4*A*C;
    
    if (D<0) {
        printf("Ambas as raízes da equação não são números Reais!");
    }
    else if (D==0) {
        printf("Ambas as raízes da equação são Reais e iguais!");
    }
    else {
        printf("Ambas as raízes são Reais e distintas!");
    }
    
    printf("\n");
    
    D=pow(D, 0.5);
    
    X1=(-B+D)/2*A;
    printf("Raíz 1: %.2f\n", X1);
    
    X2=(-B-D)/2*A;
    printf("Raíz 2: %.2f\n", X2);
}