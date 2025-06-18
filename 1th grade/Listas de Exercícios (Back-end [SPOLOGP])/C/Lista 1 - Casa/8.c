#include <stdio.h>

int main ()
{
    float N1, N2, N3, N4, M;
    
    printf("Média final do aluno\n\n");
    
    printf("--Valores decimais devem ser digitados com (.)!--\n");
    
    printf("Nota - 1º Bimestre: "); scanf("%f", &N1);
    printf("Nota - 2º Bimestre: "); scanf("%f", &N2);
    printf("Nota - 3º Bimestre: "); scanf("%f", &N3);
    printf("Nota - 4º Bimestre: "); scanf("%f", &N4);
    
    M=(N1+N2+N3+N4)/4;
    
    printf("\nMédia final: %.1f\n", M);
}