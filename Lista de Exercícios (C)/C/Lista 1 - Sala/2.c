#include <studio.h>

int main()
{
    float C, F;
    printf("Entre F: ");
    scanf("%f", &F);
    C=(((F-32)*5)/9);
    printf("%.2f", C);
    return 0;
}