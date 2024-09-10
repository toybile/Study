#include <stdio.h>

int main()
{
    float T, V, P, TA;
    
    printf("Prestação atrasada\n\n");
    
    printf("--Valores decimais devem ser digitados com (.)!--\n");
    
    printf("Valor: "); scanf("%f", &V);
    printf("Tempo de atraso (unidade de tempo em que a Taxa é cobrada): "); scanf("%f", &T);
    printf("Taxa (em forma de número, exemplo: 90% --> 1.9): "); scanf("%f", &TA);
    
    P=V+(V*(TA/100)*T);
    
    printf("\nPrestação: R$%.2f\n", P);
}