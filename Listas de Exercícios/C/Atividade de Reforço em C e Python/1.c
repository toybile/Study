#include <stdio.h>
#include <stdlib.h>

int main() {
    printf("Salário-Aumento\n\n");
    
    // Realocação de memória para a variável 'nome (char)'
    int tamanho_inicial = 10;
    char *Name = (char*)malloc(tamanho_inicial * sizeof(char));

    printf("Nome: ");
    int posicao = 0;
    char caractere;

    while ((caractere = getchar()) != '\n') {
        Name[posicao++] = caractere;

        if (posicao >= tamanho_inicial) {
            tamanho_inicial *= 2;
            Name = (char*)realloc(Name, tamanho_inicial * sizeof(char));
        }
    }

    Name[posicao] = '\0';
    // - //
    
    float S_A, N_S, A;

    printf("Salário: "); scanf("%f", &S_A);

    N_S=S_A;
    A=1.0;

    if (S_A<401){
    A=1.15;
    N_S = S_A * A;
    } else if (401<=S_A && S_A<701){
    A=1.12;
    N_S = S_A * A;
    } else if (701<=S_A && S_A<1001){
    A=1.1;
    N_S = S_A * 1.1;
    } else if (1001<=S_A && S_A<1801){
    A=1.07;
    N_S = S_A * A;
    } else if (1801<=S_A && S_A<2501){
    A=1.04;
    N_S = S_A * A;
    }

    A = A * 100;
    A -= 100;

    printf("\n\n==============================\n");
    printf(" %s\n\nAumento: %.2f%\nSalário Atual: R$%.2f\nNovo Salário: R$%.2f", Name, A, S_A, N_S);
    printf("\n==============================\n");

    return 0;
}