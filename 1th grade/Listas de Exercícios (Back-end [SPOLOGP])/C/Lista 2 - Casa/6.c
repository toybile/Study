#include <stdio.h>

int main()
{
    int M;
    
    printf("Mês (1 a 12)\n\n");
    
    printf("Mês (forma numérica [1 a 12]): "); scanf("%d", &M);
    
    printf("\n");
    
    if (M==1) {
        printf("Janeiro");
    }
    else if (M==2) {
        printf("Fevereiro");
    }
    else if (M==3) {
        printf("Março");
    }
    else if (M==4) {
        printf("Abril");
    }
    else if (M==5) {
        printf("Maio");
    }
    else if (M==6) {
        printf("Junho");
    }
    else if (M==7) {
        printf("Julho");
    }
    else if (M==8) {
        printf("Agosto");
    }
    else if (M==9) {
        printf("Setembro");
    }
    else if (M==10) {
        printf("Outubro");
    }
    else if (M==11) {
        printf("Novembro");
    }
    else if (M==12) {
        printf("Dezembro");
    }
    else {
        printf("Digite um valor entre 1 e 12!!");
    }
}