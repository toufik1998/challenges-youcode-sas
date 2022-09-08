#include <stdio.h>
#include <stdlib.h>

int main()
{
    float rayon, p;
    const Pi = 3.14;
    printf("Please enter rayon of your circle \n");
    scanf("%f", &rayon);
    p = rayon * 2 * Pi;
    printf("the circumference of your circle is %.2f", p);
    return 0;
}
