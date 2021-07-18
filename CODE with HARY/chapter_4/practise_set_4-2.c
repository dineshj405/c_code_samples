//  print the table of 10 
#include<stdio.h>
int main()
{
    int i = 1;
    printf("table of 10 \n");

    // while(i > 11){
        for (i = 1; i<=10; i++){
            printf("10 x %d = %d  \n", i , 10*i);
        }
    // }
    return 0;
}