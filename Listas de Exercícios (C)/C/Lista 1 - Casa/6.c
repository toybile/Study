#include <stdio.h>
#include <math.h>

int main ()
{
    float r, r_2, A, C;
    
    printf("Área e comprimento de uma circunferência\n\n");
    
    printf("--Valores decimais devem ser digitados com (.)!--\n");

    printf("Raio da circunferência: "); scanf("%f", &r);
    
    r_2=pow(r, 2);

    A=3.14*r_2;
    C=2*3.14*r;
    
    printf("\nÁrea: %.2f(medida)²\nComprimento: %.2f(medida)\n", A, C);
}