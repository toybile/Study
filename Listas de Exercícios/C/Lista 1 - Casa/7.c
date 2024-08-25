#include <stdio.h>
#include <math.h>

int main ()
{
    float r, r_2, r_3, V, A;
    
    printf("Volume e área da superfície da esfera\n\n");
    
    printf("--Valores decimais devem ser digitados com (.)!--\n");

    printf("Raio da esfera: "); scanf("%f", &r);
    
    r_2=pow(r, 2);
    r_3=pow(r, 3);
    
    V=(4*3.14*r_3)/3;
    A=4*3.14*r_2;
    
    printf("\nVolume: %.2f(medida)³\nÁrea (Superfície): %.2f(medida)²\n", V, A);
}