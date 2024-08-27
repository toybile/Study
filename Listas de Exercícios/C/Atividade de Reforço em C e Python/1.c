#include <stdio.h>

int main (){
    char Name;
    float S_A, N_S, A;

    printf("Salário-Aumento\n\n");

    printf("Nome: "); scanf("%c", &Name);
    printf("Salário: "); scanf("%f", &S_A);

    A=1.0;

    if (S_A<401){
    A=1.15;
    N_S = S_A * A;
    } else if (401<S_A<701){
    A=1.12;
    N_S = S_A * A;
    } else if (701<S_A<1001){
    A=1.1;
    N_S = S_A * 1.1;
    } else if (1001<S_A<1801){
    A=1.07;
    N_S = S_A * A;
    } else if (1801<S_A<2501){
    A=1.04;
    N_S = S_A * A;
    }

    A = A * 100;
    A -= 100;

    printf("\n\n============================\n");
    printf(" %c\n\nAumento: %.2f%\nSalário Atual: R$%.2f\nNovo Salário: R$%.2f", Name, A, S_A, N_S);
    printf("\n==============================\n");
}