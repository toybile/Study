#include <stdio.h>

int main()
{
    float A, B, C;
    
    printf("Triângulo\n\n");
    
    printf("--Valores decimais devem ser digitados com (.)!--\n");
    
    printf("Digite o lado A do triângulo: "); scanf("%f", &A);
    printf("Digite o lado B do triângulo: "); scanf("%f", &B);
    printf("Digite o lado C do triângulo: "); scanf("%f", &C);
    
    printf("\n");
    
    if (A<B+C && B<C+A && C<B+A) {
        printf("Esses lados formam um triângulo!\n");
        if (A==B && B==C) {
            printf("Esse triângulo é Equilátero!");
        }
        else if (A!=B && B!=C && C!=A) {
            printf("Esse triângulo é Escaleno!");
        }
        else if (A==B || B==C || C==A) {
            printf("Esse triângulo é Isósceles!");
        }
    }
    else {
        printf("Esses lados não formam um triângulo!");
    }
}