#include <stdio.h>
#include <math.h>

int main ()
{
    float t, t_2, s0, v0, a, s;
    
    printf("Movimento Uniformemente Variado\n\n");
    
    printf("--Valores decimais devem ser digitados com (.)!--\n");
    
    printf("Tempo (s): "); scanf("%f", &t);
    
    t_2=pow(t, 2);
    
    s0=2;
    v0=3;
    a=10;
    
    s=s0+v0*t+0.5*a*t_2;
    
    printf("\nMetros: %.2f", s);
}