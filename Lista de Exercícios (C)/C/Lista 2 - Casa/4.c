#include <stdio.h>

int main()
{
    float A, B, C;
    
    printf("Maior, menos e número do meio\n\n");
    
    printf("--Valores decimais devem ser digitados com (.)!--\n");
    
    printf("1º número: "); scanf("%f", &A);
    printf("2º número: "); scanf("%f", &B);
    printf("3º número: "); scanf("%f", &C);
    printf("\n");
    
    if (A>B && A>C) {
        printf("Maior número: %.2f\n", A);
        if (B>C) {
            printf("Número do meio: %.2f\n", B);
            printf("Menor número: %.2f\n", C);
        }
        else {
            printf("Número do meio: %.2f\n", C);
            printf("Menor número: %.2f\n", B);
        }
    }
    else if (B>A && B>C) {
        printf("Maior número: %.2f\n", B);
        if (A>C) {
            printf("Número do meio: %.2f\n", A);
            printf("Menor número: %.2f\n", C);
        }
        else {
            printf("Número do meio: %.2f\n", C);
            printf("Menor número: %.2f\n", A);
        }
    }
    else {
        printf("Maior número: %.2f\n", C);
        if (B>A) {
            printf("Número do meio: %.2f\n", B);
            printf("Menor número: %.2f\n", A);
        }
        else {
            printf("Número do meio: %.2f\n", A);
            printf("Menor número: %.2f\n", B);
        }
    }
}