//Que 4: Write a program to determine whether a number is by 97 or not

#include <stdio.h>
int main()
{
float  num;
printf("Enter the number \n");
scanf("%f", &num);
printf("Divisibility test returns: %f\n", num/97);

//Que 5: Explain step by step evaluation of  3 * x / y - z + k, where x=2, y=3, z=3, k=1
int  x = 2, y = 3, z = 3, k = 1;
/* 3 * 2 / 3 - 3 + 1
       6 / 3 - 3 + 1
           2 - 3 + 1
             - 1 + 1
                   0 
*/
printf("The above mathematical eqution in terms of C returns %d \n", 3*x/y-z+k);
    return 0;
    
}