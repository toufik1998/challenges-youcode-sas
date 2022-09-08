#include <stdio.h>
#include <stdlib.h>

int main()
{
    int meters, km;
    float mile_unite, mile;
    printf("Please enter the distance in meters \n");
    scanf("%d", &meters);
    mile_unite = 0.00062137;
    mile = meters * mile_unite;
    printf("the distance meters in mile is %.5f", mile);

    return 0;
}
