#include <stdio.h>

int main()
{
    float N_a, S, N;
    printf("1 a 500 - Soma de todos os pares\n\n");
    
    N_a=0;
    N=2;
    
    for (N == 2; N<501; N += 2){
        S = N + N_a;
        N_a = S;
    }
    printf("%.2f\n", S);
}