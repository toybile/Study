#include <stdio.h>

int main()
{
    float F, a, atual, atual_m;
    printf("Fibonacci - até 15º Termo\n\n");
    
    a=1;
    atual=2;
    F=3;
    
    printf("1\n1\n2\n");
    for (F == 3; F<15; F += 1){
        atual_m = atual;
        atual = atual + a;
        
        printf("%.2f\n", atual);
        
        a = atual_m;
    }
}