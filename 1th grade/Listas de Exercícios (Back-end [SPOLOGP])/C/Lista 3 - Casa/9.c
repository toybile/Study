#include <stdio.h>

int main()
{
    int N;
    printf("1 a 20 - Pares e Ímpares\n\n");
    
    N=2;
    printf("Pares:\n");
    do {
        printf("%d\n", N);
        N += 2;
    } while (N<21);
    
    N=1;
    printf("\nÍmpares:\n");
    do {
        printf("%d\n", N);
        N += 2;
    } while (N<21);
}