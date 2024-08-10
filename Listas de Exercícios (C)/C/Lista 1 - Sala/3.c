#include <stdio.h>

int main ()
{
    float V, r, h;
    
    printf("Volume de uma lata (cilindro)\n\n");
    
    printf("--Valores decimais devem ser digitados com (.)!--\n");
    printf("--Utilize a mesma unidade de medida!--\n");
    
    printf("Altura: "); scanf("%f", &h);
    printf("Raio da circunferência do círculo da base: "); scanf("%f", &r);
    
    V=h*r*3.14159;
    
    printf("\nVolume da lata: %.2f(medida)³\n", V);
}