// sum of 1 to 10 using while loop & for loop

#include <stdio.h>
int main()
{
    int start, end, sum = 0;
    printf("enter the first value \n");
    scanf("%d", &start);

    printf("enter the second value \n");
    scanf("%d", &end);

    // using FOR LOOP
    /* for (start = start; start <= end; start++)
    {
        sum += start;
    }
    */

    //  using WHILE LOOP
    /* while (start <= end)
    {
        sum += start;
        start++;
    }
    */

    // do while loop
    do
    {
        sum += start;
        start++;
    } while (start <= end);

    printf("the sum of 1 to 10 is %d \n", sum);
    return 0;
}