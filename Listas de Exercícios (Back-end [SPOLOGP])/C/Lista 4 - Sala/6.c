#include <stdio.h>
#include <math.h>

void ler_vetor(char vetor_type, int vetor[], int size) {
    printf("\n");
    
    for (int i = 0; i < size; ++i) {
        printf("%dº valor: ", i + 1);
        scanf("%d", &vetor[i]);
    }
}

void mostrar_vetor(char vetor_type, int vetor[], int size) {
    printf("\nVetor %c -> ", vetor_type);
    for (int i = 0; i < size; ++i) {
        if (i == size - 1) {
            printf("| %d |\n\n", vetor[i]);
        } else {
            printf("| %d ", vetor[i]);
        }
    }
}

void vetor_fatorial(int B[], int A[], int size) {
    for (int i = 0; i < size; ++i) {
        B[i] = pow(A[i], 2);
    }
}

int main() {
    printf("Tamanho das Matrizes Vetoriais: ");
    
    int size;
    scanf("%d", &size);
    
    int A[size], B[size];
    
    
    printf("# Matriz Vetorial A\n");

    ler_vetor('A', A, size);
    mostrar_vetor('A', A, size);

    
    printf("\n# Matriz Vetorial B - (A²)\n");

    vetor_fatorial(B, A, size);
    mostrar_vetor('B', B, size);

    return 0;
}
