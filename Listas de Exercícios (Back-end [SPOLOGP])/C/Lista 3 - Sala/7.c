#include <stdio.h>
#include <math.h>

int main()
{
    float P, B, R;
    printf("Potências de 3 variando de 0 a 15\n\n");
    
    P=0;
    B=3;
    
    for (P == 1; P<16; P += 1){
        R=pow(B, P);
        printf("%.2f elevado a %.2f = %.2f\n", B, P, R);
    }
}