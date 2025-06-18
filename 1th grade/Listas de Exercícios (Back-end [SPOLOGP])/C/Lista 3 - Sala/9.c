#include <stdio.h>
#include <math.h>

int main()
{
    float B, B_m, E;
    printf("B elevado a E\n\n");
    
    printf("Base: "); scanf("%f", &B);
    printf("Expoente: "); scanf("%f", &E);
    
    B_m = B;
    B = pow(B, E);
    
    printf("\n%.2f elevado a %.2f = %.2f\n", B_m, E, B);
}