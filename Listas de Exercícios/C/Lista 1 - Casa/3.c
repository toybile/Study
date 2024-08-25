#include <stdio.h>

int main()
{
    float AP, LP, AA, LA, Azulejos, A2A, A2P;
    
    printf("Quantidade necessária de azulejos para azulejar uma parede\n\n");
    
    printf("--Valores decimais devem ser digitados com (.)!--\n");
    printf("--Utilize a mesma unidade de medida!--\n");

    printf("Altura da parede: "); scanf("%f", &AP);
    printf("Largura da parede: "); scanf("%f", &LP);
    printf("Altura do azulejo: "); scanf("%f", &AA);
    printf("Largura do azulejo: "); scanf("%f", &LA);
    
    A2A=AA*LA;
    A2P=AP*LP;
    
    Azulejos=A2P/A2A;
    
    printf("\nSerão necessários %.2f azulejos para azulejar toda a parede\n", Azulejos);
}