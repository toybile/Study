#include <stdio.h>

int main()
{
    int N;
    
    printf("1 a 20 - Ímpares\n\n");
    
    printf("Pares:\n");
    for (N = 2; N<=20; N += 2){
        printf("%d\n", N);
    }
}