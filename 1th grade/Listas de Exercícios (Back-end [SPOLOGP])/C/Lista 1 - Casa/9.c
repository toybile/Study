#include <stdio.h>

int main ()
{
    float P1, P2, A, M;
    
    printf("Média semestral do aluno\n\n");
    
    printf("--Valores decimais devem ser digitados com (.)!--\n");
    
    printf("Prova 1: "); scanf("%f", &P1);
    printf("Prova 2: "); scanf("%f", &P2);
    printf("Nota das atividades: "); scanf("%f", &A);
    
    
    M=(P1*4+P2*4+A*2)/10;
    
    printf("\nMédia semestral: %.1f\n", M);
}