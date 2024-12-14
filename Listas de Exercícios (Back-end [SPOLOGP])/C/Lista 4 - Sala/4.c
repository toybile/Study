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

void vetor_AjuncaoB(float C[], float B[], float A[], int size) {
    for (int i = 0; i < size; ++i) {
        C[i] = A[i];
    }
    for (int i = size; i < size * 2; ++i) {
        C[i] = B[i - size];
    }
}

int main() {
    printf("Tamanho das Matrizes Vetoriais: ");
    
    int size;
    scanf("%d", &size);
    
    float A[size], B[size], C[size * 2];
    
    
    printf("\n# Matriz Vetorial A\n");
    
    ler_vetor('A', A, size);
    mostrar_vetor('A', A, size);
    
    
    printf("\n# Matriz Vetorial B\n");
    
    ler_vetor('B', B, size);
    mostrar_vetor('B', B, size);
    
    
    printf("\n# Matriz Vetorial C (A junção com B)\n");
    vetor_AjuncaoB(C, B, A, size);
    mostrar_vetor('C', C, 10);

    return 0;
}
