#include <stdio.h>
#include <stdlib.h>

int main()
{
    float longeur, largeur, circumference;
    printf("Please enter longeur of your rectangle \n");
    scanf("%f", &longeur);
     printf("Please enter largeur of your rectangle \n");
    scanf("%f", &largeur);
    circumference = (longeur + largeur) * 2;
    printf("the circumference of your rectangle is %.2f", circumference);
    return 0;
}
