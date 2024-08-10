#include <stdio.h>
#include <math.h>

int main ()
{
    float IMC, h, m;
    
    printf("IMC\n\n");
    
    printf("--Valores decimais devem ser digitados com (.)--\n");

    printf("Sua altura (m): "); scanf("%f",&h);
    printf("Sua massa (kg): "); scanf("%f", &m);
    
    h=pow(h, 2);
    
    IMC=m/h;
    
    printf("\nSeu IMC é %.2f\n", IMC);
}