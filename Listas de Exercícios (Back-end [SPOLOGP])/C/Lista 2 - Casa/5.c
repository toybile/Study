#include <stdio.h>

int main()
{
    float S_B, S_B_cálculos, H, valor_por_hora, H_valor, H_extra, S_L;
    int F;
    
    printf("Salário Líquido\n\n");
    
    printf("info: Para finalizar o programa, basta digitar (0) no Salário Bruto!\n\n");

    printf("--Valores decimais devem ser digitados com (.)!--\n");
    printf("--Devem ser digitado apenas o número dos valores!--\n\n");
    
    S_B=1.0;
    F=1;
    
    while (S_B !=0) {
        printf("==================================\n");
        printf("%dº Funcionário:\n\n", F);
        
        printf("Salário Bruto (R$): "); scanf("%f", &S_B);
        
        if (S_B == 0) {
            return(0);
        }
        
        printf("Horas trabalhadas (mês): "); scanf("%f", &H);
        
        S_B_cálculos = S_B;
        
    // Adicionais ==================
        if (H>160.0) {
            valor_por_hora = S_B/160;
            H_valor = valor_por_hora * 1.5;
            
            H_extra = H - 160;
            S_B_cálculos = S_B_cálculos + H_valor * H_extra;
        }
        
    // Descontos ===================
        if (S_B_cálculos<800) {
            S_B_cálculos = S_B_cálculos;
        }
        if (800<=S_B_cálculos && S_B_cálculos<=1600) {
            S_B_cálculos = S_B_cálculos * 0.87;
        }
        if (S_B_cálculos>1600) {
            S_B_cálculos = S_B_cálculos * 0.78;
        }
        
// =============================================================
// =============================================================
    
    S_L = S_B_cálculos;
    
    printf("\nSalário Líquido: R$%.2f", S_L);

// =

    F=F+1;
    
    printf("\n");
    }
}