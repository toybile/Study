#include <stdio.h>

int main()
{
    float N, Q;
    printf("15 a 200 - X²\n\n");
    
    N=15;
    Q=N;
    
    for (N == 15; N<201; N += 1){
        Q=N*N;
        printf("%.2f² = %.2f\n", N, Q);
    }
}