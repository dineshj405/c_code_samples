
// Write a program to print first n natural numbers using do_while_loop. (n = 8)

#include<stdio.h>
int main()
{
    int i = 0, n;
    printf("the value of n is  \n");
    scanf("%d", &n);

    do{
        printf("the value of i is %d \n", i);
        i++;
    }
    while(i < n);

    return 0;
}