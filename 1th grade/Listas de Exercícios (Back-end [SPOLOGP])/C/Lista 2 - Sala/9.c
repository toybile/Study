#include <stdio.h>
#include <math.h>

int main()
{
    int A, B;
    
    printf("2 números inteiros divisíveis por 4 e 5\n\n");
    
    printf("--Valores decimais devem ser digitados com (.)!\n");
    
    printf("1º Número: "); scanf("%d", &A);
    printf("2º Número: "); scanf("%d", &B);
    
    printf("\n");
    
    if (fmod(A, 5)==0 && fmod(A, 4)==0) {
        printf("%d - É divisível por 4 e 5!", A);
    }
    else {
        printf("%d - NÃO é divisível por 4 e 5!", A);
    }
    
    printf("\n");
    
    if (fmod(B, 5)==0 && fmod(B, 4)==0) {
        printf("%d - É divisível por 4 e 5!", B);
    }
    else {
        printf("%d - NÃO é divisível por 4 e 5!", B);
    }
}