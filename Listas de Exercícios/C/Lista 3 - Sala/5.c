#include <stdio.h>

int main()
{
    float N;
    printf("Números menores que 200 que são divisíveis por 4\n\n");
    
    N=4;
    for (N == 4; N<200; N += 4){
        printf("%.2f\n", N);
    }
}