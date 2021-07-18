#include<stdio.h>
int main()
{
    int num;
    printf("enter a number \n");
    scanf("%d", &num);

    (num > 5)? printf("number is greater than 5 \n") : printf("number is not greater than 5 \n");

    return 0;
}