#include <stdio.h>

int main ()
{
    float e, t, vm;
    
    printf("Velocidade média\n\n");
    
    printf("--Valores decimais devem ser digitados com (.)!--\n");

    printf("Espaço percorrido (m): "); scanf("%f", &e);
    printf("Tempo gasto (s): "); scanf("%f", &t);
    
    vm=e/t;
    
    printf("\nVelocidade média: %.2fm/s\n", vm);
}