#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int a, b;
    printf("Hi! Please enter value of number One \n");
    scanf("%d", &a);
    printf("Hi! Please enter value of number Two \n");
    scanf("%d", &b);
    printf("A + B = %.2f \n", (float) a + b);
    printf("A - B = %.2f \n", (float) a - b);
    printf("A * B = %.2f \n", (float) a * b);
    printf("A : B = %.2f \n",(float)a / b);
    printf("Remainder of  A , B = %d", a % b);

    return 0;
}
