#include<stdio.h>
int main()
{
    int physics, chemistry, maths;
    float total;

    printf("physics marks \n");
    scanf("%d", &physics);

    printf("chemistry marks \n");
    scanf("%d", &chemistry);

    printf("maths marks \n");
    scanf("%d", &maths);

    total = (physics + chemistry + maths)/3;
    printf("total %f \n", total);

    if((total < 40) || (physics < 33) || (chemistry < 33) || (maths < 33)){
         printf("your total percentage is %f you are fail \n", total);
     }
     else{
         printf("your total percentage is %f you are pass \n", total);
     }

    return 0;
}
