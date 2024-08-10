#include <stdio.h>

int main()
{
    float V, T, D, L_U;

    printf("Litros que um carro (12km/L) gasta numa viagem\n\n");
    
    printf("--Valores decimais devem ser digitados com (.)!--\n");
    
    printf("Tempo gasto na viagem (h): "); scanf("%f", &T);
    printf("Velocidade (km/h): "); scanf("%f", &V);

    D=V*T;
    L_U=D/12;

    printf("\nLitros usados: %.2f L\nDistância percorrida: %.2f km\nVelocidade média: %.2f km/h\nTempo Gasto: %.2f h\n", L_U, D, V, T);
}