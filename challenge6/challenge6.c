#include <stdio.h>
#include <stdlib.h>

int main()
{
     int Ftemp ;

     float C_temp ;


       printf(" Hi! Please enter degree of the temperature in Fahrenheit \n ");
       scanf("%d", &Ftemp);
       C_temp = (Ftemp-32)/1.8;

        printf("the degree of temperature in cellusius is %f",C_temp);

    return 0;
}
