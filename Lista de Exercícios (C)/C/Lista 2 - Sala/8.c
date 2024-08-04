#include <stdio.h>
#include <math.h>

int main()
{
    int A, B, C;
    
    printf("3 números inteiros divisíveis por 2 e 3\n\n");
    
    printf("--Valores decimais devem ser digitados com (.)!--\n");
    
    printf("1º Número: "); scanf("%d", &A);
    printf("2º Número: "); scanf("%d", &B);
    printf("3º Número: "); scanf("%d", &C);
    
    printf("\n");
    
    if (fmod(A, 3.0)==0 && fmod(A, 2.0)==0) {
        printf("%d - É divisível por 2 e 3!", A);
    }
    else {
        printf("%d - NÃO é divisível por 2 e 3!", A);
    }
    
    printf("\n");
    
    if (fmod(B, 3.0)==0 && fmod(B, 2.0)==0) {
        printf("%d - É divisível por 2 e 3!", B);
    }
    else {
        printf("%d - NÃO é divisível por 2 e 3!", B);
    }
    
    printf("\n");
    
    if (fmod(C, 3.0)==0 && fmod(C, 2.0)==0) {
        printf("%d - É divisível por 2 e 3!", C);
    }
    else {
        printf("%d - NÃO é divisível por 2 e 3!", C);
    }
}