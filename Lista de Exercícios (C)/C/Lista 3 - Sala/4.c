#include <stdio.h>

int main()
{
    float N;
    printf("Número menor ou igual a 50 e seu valor por uma multiplicação sucessiva por 3, antes que chegue a ser 250\n\n");

    printf("--Valores decimais devem ser digitados com (.)!--\n");
    printf("Número: "); scanf("%f", &N);
    printf("\n");
    
    if (N<=50){
        do{
            N=N*3;
        }while (N<250);
    }N=N/3;
    printf("%.2f\n", N);
}