#include <stdio.h>
#include <stdlib.h>

int main()
{
    char name[10], last_name[10], sexe[10];
    int age, phone;
    printf("Please enter your name \n");
    scanf("%s", name);
    printf("Please enter your last name \n");
    scanf("%s", last_name);
    printf("Please enter your sexe \n");
    scanf("%s", sexe);
    printf("Please enter your age \n");
    scanf("%d", &age);
    printf("Please enter your number phone \n");
    scanf("%d", &phone);
    printf("hello %s %s, you are a %s, and your age is %d, your number phone is %d", name, last_name, sexe, age, phone);

    return 0;
}
