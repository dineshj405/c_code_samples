#include <stdio.h>
int main()
{
    int i = 1, table, sum;
    printf("Here's the table of ");
    scanf("%d", &table);

    while (i <= 10)
    {
        printf("%d x %d = %d \n", table, i, table * i);
        ++i;
    }
    sum = table * i;
    printf("sum = %d \n", sum);
    // for (i = 1; i <= 10; i++)
    // {
    //     printf("%d x %d = %d \n", table, i, table * i);
    // }

    // do
    // {
    //     printf("%d x %d = %d \n", table, i, table * i);
    //     i++;
    // } while (i <= 10);

    return 0;
}