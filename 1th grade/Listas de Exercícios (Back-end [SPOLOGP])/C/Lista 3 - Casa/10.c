#include <stdio.h>

int main()
{
    char OP;
    float N1, N2;
    printf("Calculadora\n\n");
    
    do {
        printf("\n\n============================================================\n");
        printf("info: Escolha a operação com base no símbolo em parênteses!\n\n");
        printf(" S=Sair do Programa\n");
        printf("--------------------\n");
        printf("   Soma       |  (+)\n");
        printf(" Subtração    |  (-)\n");
        printf("Multiplicação |  (*)\n");
        printf("  Divisão     |  (/)\n");
        printf("--------------------\n");
        printf("Operação: "); scanf("%s", &OP);
        
        if (OP == 'S' || OP == 's'){
            break;
        }
        
        printf("\n--Valores decimais devem ser digitados com (.)!--\n");
        printf("Digite os valores que serão utilizados no cálculo, em ordem!\n");
        printf("1º Valor: "); scanf("%f", &N1);
        printf("2º Valor: "); scanf("%f", &N2);
        printf("\n");
        
        if (OP == '+'){
            printf("%.2f + %.2f = %.2f", N1, N2, N1+N2);
        }else if (OP=='-'){
            printf("%.2f - %.2f = %.2f", N1, N2, N1-N2);
        }else if (OP=='*'){
            printf("%.2f * %.2f = %.2f", N1, N2, N1*N2);
        }else if (OP=='/'){
            printf("%.2f / %.2f = %.2f", N1, N2, N1/N2);
        }
    } while (1);
}