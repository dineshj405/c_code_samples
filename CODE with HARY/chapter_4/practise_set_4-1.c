//  print the table of 10 in reverse order

#include<stdio.h>
int main()
{
printf(" reverse table of 10 \n");

    for(int i = 10; i>=1; i--){
        printf("10 x %d = %d \n",i, 10*i);
    }
    return 0;
}