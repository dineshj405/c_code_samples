#include<stdio.h>
int main()
{
   char ch;

   printf("Enter the character \n");
   scanf("%c", &ch);

   if(ch >=97 && ch <=122){
       printf("%c is lowercase \n", ch);
   }
   else{
       printf("%c It is not lowercase \n", ch);
   }
    
    return 0;
}