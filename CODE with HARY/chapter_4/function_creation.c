// sum of 1 to 10 using while loop & for loop

#include <stdio.h>

/**
 * This is a function to return a sum of range of numbers
 * This function takes in a start value and end value
 * 
 **/
int sumInRange(int startValue, int endValue)
{
    int sum = 0;
    do
    {
        sum += startValue;
        startValue++;
    } while (startValue <= endValue);
    return sum;
}

int main()
{
    int start, end;
    printf("enter the first value \n");
    scanf("%d", &start);

    printf("enter the second value \n");
    scanf("%d", &end);
    int sum1 = sumInRange(start, end);

    // int sum2 = sumInRange(start, end);
    printf("the sum of 1 to 10 is %d \n", sum1);
    return 0;
}
