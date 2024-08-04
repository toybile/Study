#include <stdio.h>

int main()
{
    float M, N1, N2, E;
    
    printf ("Aprovação - Aluno\n\n");
    
    printf("Nota da primeira prova: "); scanf("%f", &N1);
    printf("Nota da segunda prova: "); scanf("%f", &N2);
    
    M=(N1+N2)/2;
    
    printf("\n==================\n");
    printf("Média inicial: %.2f", M);
    printf("\n==================\n\n");
    
    if (M>=6.0) {
        printf("Parabens!!\nVocê foi aprovado!");
    }
    else {
        printf("Nota do exame (faremos uma nova média com essa nota): "); scanf("%f", &E);
        
        M=(M+E)/2;
        
        printf("\n==================\n");
        printf("Média final: %.2f", M);
        printf("\n==================\n\n");
        
        if (M>=6.0) {
            printf("Parabéns!!\nVocê foi aprovado!");
        }
        else {
            printf("Você foi reprovado!");
        }
    }
    }