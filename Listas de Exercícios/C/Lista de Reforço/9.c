#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char*E=(char*)malloc(2*sizeof(char));

    printf("-------------------------\n");
    printf("       Banco IFSP\n");
    printf("-------------------------\n");
    printf(" 1 - Depósito\n");
    printf(" 2 - Saque\n");
    printf(" 3 - Extrato\n");
    printf(" 4 - Transferência\n");
    printf("-------------------------\n");
    printf("      E = Encerrar\n");
    printf("-------------------------\n");
    printf("Sua escolha: "); scanf("%s", E);
    
    if (strcmp(E,"1")==0){
        printf("\nOperação de depósito\n");
    }else if (strcmp(E, "2")==0){
     printf("\nOperação de saque\n");
    }else if (strcmp(E, "3")==0){
     printf("\nOperação de extrato\n");
    }else if (strcmp(E, "4")==0){
     printf("\nOperação de transferência\n");
    }else if (strcmp(E, "E")==0||(strcmp(E, "e")==0)){
     printf("\nEncerrando operações...\n");
    }
}