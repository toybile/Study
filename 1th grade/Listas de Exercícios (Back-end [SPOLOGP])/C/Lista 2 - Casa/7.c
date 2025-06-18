#include <stdio.h>

int main()
{
    float Code;
    
    printf("Código de Acesso\n\n");
    
    printf("Código: "), scanf("%f", &Code);
    
    printf("\n");
    
    if (Code==12345) {
        printf("- Engenharia\n- Edificações\n- Sistemas Elétricos\n- Turismo\n- Análise de Sistemas\n");
    }
    else {
        printf("Código invalido!\n");
    }
}