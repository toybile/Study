#include <stdio.h>

int main()
{
    float N, N_C, D;
    
    printf ("Número Inteiro - Distância (Número-chave)\n\n");
    
    printf("Informe um número de 0 a 100: "); scanf("%f", &N);
    
    N_C=50;
    D=N-N_C;
    
    if (D<0) {
        D=D*-1;
    }
    
    printf("\nA distância entre o número chave e o número informado é: %.2f\n", D);
}