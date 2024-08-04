#include <stdio.h>
#include <math.h>

int main()
{
    int N;
    
    printf("Número inteiro positivo\n\n");
    
    printf("--Valores decimais devem ser digitados com (.)!--\n");
    
    printf("Número inteiro: "); scanf("%d", &N);
    
    printf("\n");
    
    if (N<0) {
        N=N*-1;
    }
    else {
        N=N;
    }
    
    printf("Número inteiro positivo: %d", N);
}