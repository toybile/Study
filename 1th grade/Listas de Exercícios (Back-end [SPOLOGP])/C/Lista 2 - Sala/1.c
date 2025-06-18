#include <stdio.h>

int main()
{
    float N1, N2, N3, M;
    
    printf ("Aluno - aprovação\n\n");
    
    printf("--Valores decimais devem ser digitados com (.)!--\n");
    
    printf("Nota 1: "); scanf("%f", &N1);
    printf("Nota 2: "); scanf("%f", &N2);
    printf("Nota 3: "); scanf("%f", &N3);
    
    M=(N1+N2+N3)/3;
    
    printf("\n===========\n");
    printf("Média: %.2f\n", M);
    printf("===========\n\n");
    
    if (M<6.0) {
        printf("Você foi reprovado!");
        printf("\ninfo: Com média maior ou igual a 6 você é aprovado.");
    }
    else {
        printf("Parabéns!!\nVocê foi aprovado!");
        printf("\ninfo: Com média abaixo de 6 você é reprovado.");
    }
}