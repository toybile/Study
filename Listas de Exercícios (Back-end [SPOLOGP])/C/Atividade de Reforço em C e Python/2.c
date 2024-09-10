#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int main() {
    char a = 'S', N[20];
    float L[100];
    int count_L = 0, i;

    while (1) {
        if (a != 'S') {
            break;
        }
        
        printf("--Digite um número e dê Enter, siga o mesmo processo até que queira Parar, para tal, insira: 'P'--\n\n");

        while (1) {
            printf("-> "); scanf("%s", N);
            
            if (strcmp(N, "P") == 0 || strcmp(N, "p") == 0) {
                break;
            }
            
            char *endptr;
            float N_f = strtof(N, &endptr);
            
            if (*endptr == '\0') {
                L[count_L++] = N_f;
            } else {
                printf("\nDigite apenas números ou 'P'!\n\n");
            }
        }
        
        if (count_L > 0) {
            printf("\n\nNúmeros inseridos: ");
            for (i = 0; i < count_L; i++) {
                if (i > 0) {
                    printf(", ");
                }
                printf("%.2f", L[i]);
            }
            
            printf("\n#=#\n");
            printf("=================================================================================================");
            
            // Média aritmética
            float soma = 0.0;
            
            for (i = 0; i < count_L; i++) {
                soma += L[i];
            }
            
            float m = soma / count_L;
            printf("\nMédia aritmética: %.2f\n", m);
            
            // Maior e menor elementos
            float maior = L[0], menor = L[0];
            
            for (int i = 1; i < count_L; i++) {
                if (L[i] > maior) {
                    maior = L[i];
                }
                if (L[i] < menor) {
                    menor = L[i];
                }
            }
            
            printf("\nMaior elemento: %.2f", maior);
            printf("\nMenor elemento: %.2f", menor);
            
            // Total de elementos por faixa
            int faixa_1 = 0, faixa_2 = 0, faixa_3 = 0, faixa_4 = 0, faixa_5 = 0;
            float faixa_1_vals[100], faixa_2_vals[100], faixa_3_vals[100], faixa_4_vals[100], faixa_5_vals[100];
            int index_f1 = 0, index_f2 = 0, index_f3 = 0, index_f4 = 0, index_f5 = 0;

            for (i = 0; i < count_L; i++) {
                if (L[i] < 0) {
                    faixa_1_vals[index_f1++] = L[i];
                    faixa_1++;
                } else if (0 <= L[i] && L[i] < 15) {
                    faixa_2_vals[index_f2++] = L[i];
                    faixa_2++;
                } else if (15 <= L[i] && L[i] < 100) {
                    faixa_3_vals[index_f3++] = L[i];
                    faixa_3++;
                } else if (L[i] >= 1000) {
                    faixa_4_vals[index_f4++] = L[i];
                    faixa_4++;
                } else if (100 <= L[i] && L[i] < 1000) {
                    faixa_5_vals[index_f5++] = L[i];
                    faixa_5++;
                }
            }
            
            //*//
            void sort(float arr[], int n) {
                for (int i = 0; i < n-1; i++) {
                    for (int j = i+1; j < n; j++) {
                        if (arr[i] > arr[j]) {
                            float temp = arr[i];
                            arr[i] = arr[j];
                            arr[j] = temp;
                        }
                    }
                }
            }
            
            sort(faixa_1_vals, index_f1);
            sort(faixa_2_vals, index_f2);
            sort(faixa_3_vals, index_f3);
            sort(faixa_4_vals, index_f4);
            sort(faixa_5_vals, index_f5);

            printf("\n\nFaixa 1 -> %d elemento(s): ", faixa_1);
            for (i = 0; i < index_f1; i++) {
                if (i > 0) {
                    printf(", ");
                }
                printf("%.2f", faixa_1_vals[i]);
            }

            printf("\nFaixa 2 -> %d elemento(s): ", faixa_2);
            for (i = 0; i < index_f2; i++) {
                if (i > 0) {
                    printf(", ");
                }
                printf("%.2f", faixa_2_vals[i]);
            }

            printf("\nFaixa 3 -> %d elemento(s): ", faixa_3);
            for (i = 0; i < index_f3; i++) {
                if (i > 0) {
                    printf(", ");
                }
                printf("%.2f", faixa_3_vals[i]);
            }

            printf("\nFaixa 4 -> %d elemento(s): ", faixa_4);
            for (i = 0; i < index_f4; i++) {
                if (i > 0) {
                    printf(", ");
                }
                printf("%.2f", faixa_4_vals[i]);
            }

            printf("\nFaixa 5 -> %d elemento(s): ", faixa_5);
            for (i = 0; i < index_f5; i++) {
                if (i > 0) {
                    printf(", ");
                }
                printf("%.2f", faixa_5_vals[i]);
            }
            
            // Pares e Ímpares
            int pares = 0, impares = 0;
            float pares_vals[100], impares_vals[100];
            int index_pares = 0, index_impares = 0;

            for (i = 0; i < count_L; i++) {
                if ((int)L[i] % 2 == 0) {
                    pares_vals[index_pares++] = L[i];
                    pares++;
                } else {
                    impares_vals[index_impares++] = L[i];
                    impares++;
                }
            }
            
            sort(pares_vals, index_pares);
            sort(impares_vals, index_impares);

            printf("\n\n%d pares: ", pares);
            for (i = 0; i < index_pares; i++) {
                if (i > 0) {
                    printf(", ");
                }
                printf("%.2f", pares_vals[i]);
            }

            printf("\n%d ímpares: ", impares);
            for (i = 0; i < index_impares; i++) {
                if (i > 0) {
                    printf(", ");
                }
                printf("%.2f", impares_vals[i]);
            }
            
        } else {
            printf("Nenhum número foi inserido!");
        }
        //#=#//
        printf("\n\n#\n");
        
        while (1) {
            printf("Deseja reiniciar o Programa? (S/N): ");
            scanf(" %c", &a); a = toupper(a);
            
            if (a == 'S' || a == 'N') {
                break;
            } else {
                printf("\nDigite 'S' ou 'N'!\n\n");
            }
        }
        
        if (a == 'S') {
            printf("\n\n\n#------------------------------------------------------------------------------------------------#\n");
        }
        
        count_L = 0;
    }
    
    return 0;
}