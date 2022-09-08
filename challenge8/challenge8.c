#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b, c, d, somme;
    float moyenne;
    printf("Please enter value of A \n");
    scanf("%d", &a);
    printf("Please enter value of B \n");
    scanf("%d", &b);
    printf("Please enter value of C \n");
    scanf("%d", &c);
    printf("Please enter value of D \n");
    scanf("%d", &d);
    somme = (a + b + c + d);
    printf("somme of a, b, c, d = %d \n", somme);
    moyenne = somme / 4;
    printf("moyenne of a, b, c, d = %.2f", moyenne);
    return 0;
}
