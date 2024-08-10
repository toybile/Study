#include <stdio.h>

int main()
{
    float C, F;
    
    printf("Conversor: Fahrenheit -> Graus Centígrados\n\n");

    printf("--Valores decimais devem ser digitados com (.)!--\n");
    
    printf("Graus (Fahrenheit): "); scanf("%f", &F);
    
    C=(((F-32)*5)/9);
    
    printf("\nGraus (Centígrados): %.1fºC\n", C);
}