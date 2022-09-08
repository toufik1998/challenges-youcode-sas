#include <stdio.h>
#include <stdlib.h>

int main()
{
    int Mile;

     float metre;
     printf(" ---------------------------\n");

       printf(" Please enter distance in mile  : ");
       scanf("%d", &Mile);
       metre = (Mile  * (1000 *1.609));
       printf(" \n the distance in metre is  : %f",metre);
     printf(" \n ---------------------------");



    return 0;
}
