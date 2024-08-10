#include <stdio.h>

int main()
{
    int N1, N2, N3, N4, N5;
    printf("5 Números inteiros - Menor e maior valor\n\n");
    
    printf("Digite-os:\n");
    printf("1º: "); scanf("%d", &N1);
    printf("2º: "); scanf("%d", &N2);
    printf("3º: "); scanf("%d", &N3);
    printf("4º: "); scanf("%d", &N4);
    printf("5º: "); scanf("%d", &N5);
    
    if (N1>N2 && N1>N3 && N1>N4 && N1>N5){
        printf("Maior número: %d\n", N1);
    }else if (N2>N1 && N2>N3 && N2>N4 && N2>N5){
        printf("Maior número: %d\n", N2);
    }else if (N3>N1 && N3>N2 && N3>N4 && N3>N5){
        printf("Maior número: %d\n", N3);
    }else if (N4>N1 && N4>N2 && N4>N3 && N4>N5){
        printf("Maior número: %d\n", N4);
    }else if (N5>N1 && N5>N2 && N5>N3 && N5>N4){
        printf("Maior número: %d\n", N5);
    }else if (N1==N2 || N1==N3 || N1==N4 || N1==N5 || N2==N3 || N2==N4 || N2==N5 || N3==N4 || N3==N5 || N4==N5){
        printf("\nHá valores iguais! Eles são os maiores números!\n");
    }
    
    if (N1<N2 && N1<N3 && N1<N4 && N1<N5){
        printf("Menor número: %d\n", N1);
    }else if (N2<N1 && N2<N3 && N2<N4 && N2<N5){
        printf("Menor número: %d\n", N2);
    }else if (N3<N1 && N3<N2 && N3<N4 && N3<N5){
        printf("Menor número: %d\n", N3);
    }else if (N4<N1 && N4<N2 && N4<N3 && N4<N5){
        printf("Menor número: %d\n", N4);
    }else if (N5<N1 && N5<N2 && N5<N3 && N5<N4){
        printf("Menor número: %d\n", N5);
    }else if (N1==N2 || N1==N3 || N1==N4 || N1==N5 || N2==N3 || N2==N4 || N2==N5 || N3==N4 || N3==N5 || N4==N5){
        printf("\nHá valores iguais!\nEles são os maiores!\n");
    }
}