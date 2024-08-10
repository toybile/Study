#include <stdio.h>

int main()
{
    int N;
    
    printf("1 a 20 - Pares e Ímpares\n\n");
    
    printf("Pares:\n");
    for (N = 2; N<=20; N += 2){
        printf("%d\n", N);
    }
    
    printf("\nÍmpares:\n");
    for (N = 1; N<=20; N += 2){
        printf("%d\n", N);
    }
}