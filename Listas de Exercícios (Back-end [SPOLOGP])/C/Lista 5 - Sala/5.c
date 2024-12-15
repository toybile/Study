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

void ordenar_decrescente(float vetor[], int size) {
    // Algoritmo de ordenação Bubble Sort
    for (int i = 0; i < size - 1; ++i) {
        for (int j = i + 1; j < size; ++j) {
            if (vetor[i] < vetor[j]) {
                // Troca de valores
                float temp = vetor[i];
                vetor[i] = vetor[j];
                vetor[j] = temp;
            }
        }
    }
}

void vetor_AjuncaoB(float C[], float B[], float A[], int sizeA, int sizeB) {
    for (int i = 0; i < sizeA; ++i) {
        C[i] = A[i];
    }
    for (int j = 0; j < sizeB; ++j) {
        C[sizeA + j] = B[j];
    }
}

int main() {
    int sizeA, sizeB;
    
    
    printf("\n# Matriz Vetorial A\n");

    printf("Tamanho: ");
    scanf("%d", &sizeA);
    
    float A[sizeA];
    
    ler_vetor('A', A, sizeA);
    mostrar_vetor('A', A, sizeA);


    printf("\n# Matriz Vetorial B\n");

    printf("Tamanho: ");
    scanf("%d", &sizeB);
    
    float B[sizeB];
    
    ler_vetor('B', B, sizeB);
    mostrar_vetor('B', B, sizeB);
    
    
    printf("\n# Matriz Vetorial C ([A junção B] - decrescente)\n");
    
    int sizeC = sizeA + sizeB;
    float C[sizeC];
    
    vetor_AjuncaoB(C, B, A, sizeA, sizeB);
    ordenar_decrescente(C, sizeC);
    mostrar_vetor('C', C, sizeC);


    return 0;
}
