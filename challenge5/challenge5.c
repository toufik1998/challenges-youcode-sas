#include <stdio.h>
#include <stdlib.h>

int main()
{
    int fahrenheit, cellusius;
    printf("Hi! Please enter degree of the temperature in Fahrenheit \n");
    scanf("%d", &fahrenheit);
    cellusius = (fahrenheit-32)/1.8;
    printf("the degree of temperature in cellusius is %d \n", cellusius);
    if(cellusius < 0){
        printf("the weather is very cold");
    }else if(cellusius < 10){
        printf("the weather is cold");
    }else if(cellusius > 25 && cellusius < 35 ){
        printf("the weather is hot");
    }else{
        printf("the weather is very hot");
    }
    return 0;
}
