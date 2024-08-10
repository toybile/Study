#include <stdio.h>

int main()
{
    float T, M;
    printf("Tabuada\n\n");
    
    printf("Qual a tabuada que sua humilde pessoa deseja?\n\n");
    
    printf("--Valores decimais devem ser digitados com (.)!--\n");
    printf("Tabuada: "); scanf("%f", &T);
    
    printf("\nTabuada do %.2f:\n", T);
    
    for (M = 0; M<11; M += 1){
        printf("%.2f x %.2f = %.2f\n", T, M, T*M);
    }
}