#include <stdio.h>

int main()
{
    float M, M_int, M_decimal, m, soma_M;
    
    printf ("Arredondando médias\n\n");
    
    printf("--Valores decimais devem ser digitados com (.)!--\n");
    
    printf("Média a ser arredondada: "); scanf("%f", &M);
    
    M_int = (int)M;
    M_decimal = M - M_int;
    m = M_int + 1;
    soma_M = m - M_decimal;
    
    printf("\n");
    
    if (M_decimal>0.5) {
        printf("Média arredondada: %.2f", M_decimal+soma_M);
    }
    else {
        printf("Média arredondada: %.2f", M-M_decimal);
    }
}