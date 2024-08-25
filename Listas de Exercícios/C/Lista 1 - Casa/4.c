#include <stdio.h>

int main ()
{
    float a, b, A, P;
    
    printf("Perímetro e área de um retângulo\n\n");
    
    printf("--Valores decimais devem ser digitados com (.)!--\n");
    printf("--Utilize a mesma unidade de medida!--\n");

    printf("Menor lado do retângulo: "); scanf("%f", &a);
    printf("Maior lado do retângulo: "); scanf("%f", &b);
    
    A=a*b;
    P=a*2+b*2;
    
    printf("\nPerímetro: %.2f(medida)\nÁrea: %.2f(medida)²\n", P, A);
}