#include <stdio.h>

int main()
{
    int N;
    
    printf("1 a 20 - Pares e Ímpares\n\n");
    
    N=2;
    printf("Pares:\n");
    while (N<21){
        printf("%d\n", N);
        
        N += 2;
    }
    
    N=1;
    printf("Ímpares:\n");
    while (N<21){
        printf("%d\n", N);
        
        N += 2;
    }
}