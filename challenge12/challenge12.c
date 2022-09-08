#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char reverse_num[10];
    printf("Please enter your number \n");
    scanf("%s", reverse_num);
    printf("your number in reverse mode is %s", strrev(reverse_num));
    return 0;
}
