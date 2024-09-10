#include <stdio.h>
#include <math.h>

int main()
{
    float N;
    printf("1 a 20 - Ímpares\n\n");
    
    for (N == 1; N<21; N += 1){
        if (fmod(N, 2.0) != 0.0){
            printf("%.2f\n", N);
        }
    }
}