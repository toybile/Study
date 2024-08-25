#include <stdio.h>
#include <math.h>

int main()
{
    float N;
    int N_int;
    
    printf ("Par ou Ímpar\n\n");
    
    printf ("--Valores decimais devem ser digitados com (.)!--");
    
    printf ("\nInforme um número: "); scanf("%f", &N);
    
    N_int=(int)N;
    
    printf("\n\n");
    
    if (N-N_int==0) {
        if (fmod(N, 2.0) == 0) {
            printf ("%.2f é par", N);
        }
        else {
            printf ("%.2f é ímpar", N);
        }
    }
    else {
        printf ("%.2f não é par nem ímpar!\nApenas números inteiros são pares ou ímpares.\nUm número decimal é nenhum dos dois!", N);
    }
}