#include <stdio.h>

int main()
{
    int a = 8;
    int b = 18;
    int c = 18.8; // this is not recommended as 18.8 is not an integer, 18.8 is an float value
    float d = 18.8;
    char e = 'd';
    float l = 5.0;
    float m = 2;

    int f = 45 + 5;
    printf("The value of a is %d \n", a);
    printf("The value of b is %d \n", b);
    printf("the value of d is %f \n", d);
    printf("the value of e is %c \n", e);
    printf("Sum of a and b is %d \n", a + b);
    printf("the value of f is %d \n", f);
    printf("Subtraction of a & b is %d \n", a - b);

// Practise set 1.1_a
/*  Write a C-program to calculate area of a rectangle 
    1_a. Using Hard coded input
*/
    int length = 10, breadth = 7;
    int area = length * breadth;
    printf("Area of arectangle is %d \n", area);

 /*   // Practise set 1.1_b
    1_b. Using inputs given by the user
    int lEngth, bReadth;
    printf("What is the length of the rectangle ? \n");
    scanf("%d", &lEngth);

    printf("What is the breadth of the rectangle ? \n");
    scanf("%d", &bReadth);

    printf("Area of a rectangle is %d /n", lEngth * bReadth);
*/

// Practise set 1.2   
    int radius  = 3;
    float pi = 3.14;
    printf("the area of a circle is %f cm2 \n", pi * radius * radius);
    int height = 5;
    printf("Volume of a circle is %f cm3 \n", pi * radius * radius * height);

// Practise set 1.3
    float celsius =37;
    float far = (celsius * 9/5) + 32;
    printf("The value of this  celsius temp in Fahrenheit is %f \n", far);

// Practise set 1.4
    int  principal = 1000, rate = 12, year = 1;
    int simpleInterest = (principal * rate * year)/100;
    printf("The value of simple interest is %d \n", simpleInterest);

    printf("the value of 5/2 is %d \n", l/m);
    printf("the value of 5/2 is %f \n", l/m);
    return 0;
}