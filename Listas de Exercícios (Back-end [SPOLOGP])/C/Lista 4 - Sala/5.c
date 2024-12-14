#include <stdio.h>

int tamanho_vetor(char vetor_type) {
    printf("\n# Matriz Vetorial %c\n", vetor_type);
    printf("Tamanho: ");
    
    int size;
    scanf("%d", &size);
    
    return size;
}

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

void vetor_AjuncaoB(float C[], float B[], float A[], int sizeA, int sizeB) {
    int i, ii;
    for (i = 0; i < sizeA; ++i) {
        C[i] = A[i];
    }
    for (ii = 0; ii < sizeB; ++ii, ++i) {
        C[i] = B[ii];
    }
}


int main() {
    
    int sizeA = tamanho_vetor('A');
    float A[sizeA];
    ler_vetor('A', A, sizeA);
    mostrar_vetor('A', A, sizeA);
    
    
    
    int sizeB = tamanho_vetor('B');
    float B[sizeB];
    ler_vetor('B', B, sizeB);
    mostrar_vetor('B', B, sizeB);
    
    
    printf("\n# Matriz Vetorial C (A junção com B)\n");
    float C[sizeA + sizeB];
    vetor_AjuncaoB(C, B, A, sizeA, sizeB);
    mostrar_vetor('C', C, sizeA + sizeB);

    return 0;
}
