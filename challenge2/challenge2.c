#include <stdio.h>
#include <stdlib.h>

int main()
{
    int fahrenheit, cellusius;
    printf("Hi! Please enter degree of the temperature in Fahrenheit \n");
    scanf("%d", &fahrenheit);
    cellusius = (fahrenheit-32)/1.8;
    printf("the degree of temperature in cellusius is %d", cellusius);
    return 0;
}
