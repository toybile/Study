#include <stdio.h>

int main()
{
    float N1, N2, D;
    
    printf("Diferença entre o maior e o menor número\n\n");
    
    printf("--Valores decimais devem ser digitados com (.)!--\n");
    
    printf("Número 1: "); scanf("%f", &N1);
    printf("Número 2: "); scanf("%f", &N2);
    
    printf("\n");
    
    if (N1>N2) {
        D=N1-N2;
        printf("%.2f - %.2f = %.2f", N1, N2, D);
    }
    else {
        D=N2-N1;
        printf("%.2f - %.2f = %.2f", N2, N1, D);
    }
    
    printf("\n");
}