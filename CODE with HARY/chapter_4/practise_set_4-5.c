#include <stdio.h>
int main()
{
    int i = 0, n, factorial = 1;
    printf("Enter the number \n");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        factorial *= i;
    }
    printf("the factorial of %d is %d \n", n, factorial);

    return 0;
}