#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float distance, x1, x2, y1, y2;
    printf("Please enter value of X1 \n");
    scanf("%f", &x1);
    printf("Please enter value of X2 \n");
    scanf("%f", &x2);
    printf("Please enter value of X3 \n");
    scanf("%f", &y1);
    printf("Please enter value of X4 \n");
    scanf("%f", &y2);
    distance = sqrt(pow(x1+x2, 2) + pow(y1+y2, 2));
    printf("the distance between two points is ==> %.2f", distance);
    return 0;
}
