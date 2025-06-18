#include <stdio.h>

void ler_vetor(char vetor_type, float vetor[], int size) {
    printf("\n");
    
    for (int i = 0; i < size; ++i) {
        printf("%dº valor: ", i + 1);
        scanf("%f", &vetor[i]);
    }
}

void mostrar_vetor(char vetor_type, float vetor[], int size) {
    printf("\nVetor %c -> ", vetor_type);
    for (int i = 0; i < size; ++i) {
        if (i == size - 1) {
            printf("| %.2f |\n\n", vetor[i]);
        } else {
            printf("| %.2f ", vetor[i]);
        }
    }
}

void vetor_mais2(float B[], float A[], int size) {
    for (int i = 0; i < size; ++i) {
        B[i] = A[i] + 2;
    }
}

void ordenar_crescente(float vetor[], int size) {
    for (int i = 0; i < size - 1; ++i) {
        for (int j = i + 1; j < size; ++j) {
            if (vetor[i] > vetor[j]) {
                float temp = vetor[i];
                vetor[i] = vetor[j];
                vetor[j] = temp;
            }
        }
    }
}

void rotina_verElemento(float vetor[]) {
    char rotina;
    int elemento;
    
    for (;;) {
        printf("\nPosição: ");
        scanf("%d", &elemento);
        
        printf("\n%dº elemento: %.2f\n", elemento, vetor[elemento - 1]);
        
        printf("\nDeseja continuar? (S/N): ");
        scanf(" %c", &rotina);
        
        if (rotina == 'N' || rotina == 'n') {
            break;
        }
    }
}

int main() {
    printf("Tamanho das Matrizes Vetoriais: ");
    
    int size;
    scanf("%d", &size);
    
    float A[size], B[size];
    
    
    printf("\n# Matriz Vetorial A\n");
    ler_vetor('A', A, size);
    mostrar_vetor('A', A, size);
    
    for (int i = 0; i < size; ++i) {
        B[i] = A[i];
    }

    printf("\n# Matriz Vetorial B\n");
    vetor_mais2(B, A, size);
    ordenar_crescente(B, size);
    mostrar_vetor('B', B, size);
    
    printf("\nVerifique o valor de um elemento");
    rotina_verElemento(B);

    return 0;
}
