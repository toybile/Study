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

void ordenar_crescente(float vetor[], int size) {
    // Algoritmo de ordenação Bubble Sort
    for (int i = 0; i < size - 1; ++i) {
        for (int j = i + 1; j < size; ++j) {
            if (vetor[i] > vetor[j]) {
                // Troca de valores
                float temp = vetor[i];
                vetor[i] = vetor[j];
                vetor[j] = temp;
            }
        }
    }
}

void rotina_verElemento(float vetor[], int size) {
    char rotina;
    int elemento;
    
    for (;;) {
        printf("\nPosição: ");
        scanf("%d", &elemento);
        
        if (elemento < 1 || elemento > size) {
            printf("\nPosição inválida!\nInsira um número entre 1 e %d.\n", size);
            continue;
        }
        
        printf("%dº elemento: %.2f\n", elemento, vetor[elemento - 1]);
        
        
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

    printf("\n# Matriz Vetorial B (A - crescente)\n");
    ordenar_crescente(B, size);
    mostrar_vetor('B', B, size);
    
    int elemento;
    printf("Verifique o valor de um elemento\n");
    rotina_verElemento(B, size);

    return 0;
}
