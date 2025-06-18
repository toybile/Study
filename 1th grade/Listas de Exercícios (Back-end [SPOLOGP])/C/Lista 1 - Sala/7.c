#include <stdio.h>

int main()
{
    int NR_C;
    float C;
    
    printf("Custo criação - Coelhos\n\n");
    
    printf("Quantidade de coelhos: "); scanf("%d", &NR_C);
    
    C=(NR_C*0.70)/18+10;
    
    printf("\nCusto: R$%.2f\n", C);
}