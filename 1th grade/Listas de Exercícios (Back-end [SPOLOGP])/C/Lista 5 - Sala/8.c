#include <stdio.h>

void ler_notas(char vetor_type, float vetor[], int size) {
    printf("\n================\n");
    printf("Digite as notas\n\n");
    
    for (int i = 0; i < size; ++i) {
        printf("%dº Aluno(a): ", i + 1);
        scanf("%f", &vetor[i]);
    }
    
    printf("================\n");
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

void exibir_notas(float vetor[], int Qalunos) {
    printf("\n========================\n");
    printf("Notas (ordem crescente)\n");
    
    for (int i = 0; i < Qalunos; ++i) {
        printf("\n%.2f", vetor[i]);
    }
    
    printf("\n========================\n");
}

void rotina_verNota(float vetor[]) {
    char rotina;
    int estudante;
    
    printf("\n\n###\n=========================================\n");
    printf("Verifique as notas pelo nº do estudante\n");
    
    for (;;) {
        printf("\nAluno(a): ");
        scanf("%d", &estudante);
        
        printf("%dº Aluno(a): %.2f\n", estudante, vetor[estudante - 1]);
        
        printf("\nDeseja continuar? (S/N): ");
        scanf(" %c", &rotina);
        
        if (rotina == 'N' || rotina == 'n') {
            break;
        }
    }
    
    printf("=========================================\n");
}

int main() {
    int Qalunos;
        
    printf("Quantos alunos?\n");
    scanf("%d", &Qalunos);
    
    float A[Qalunos];
    ler_notas('A', A, Qalunos);
    
    float A_crescente[Qalunos];
    for (int i = 0; i < Qalunos; ++i) {
        A_crescente[i] = A[i];
    }
    
    ordenar_crescente(A_crescente, Qalunos);
    exibir_notas(A_crescente, Qalunos);
    
    rotina_verNota(A);

    return 0;
}
