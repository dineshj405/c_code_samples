#include<stdio.h>
int main()
{
    int a;
    printf("enter the value of a \n");
    scanf("%d", &a);

    while(a < 10){
        printf("%d \n", a=a+1);
        // a=a+2;
    }
    return 0;
}