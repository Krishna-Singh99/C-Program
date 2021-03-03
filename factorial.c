#include <stdio.h>
int main()
{
    int num,i,mul=1;

   printf("Enter a number:");
   scanf("%d",&num);
    for(i=1;i<=num;i++)
    {
        mul=mul*i;

    }
 printf("The factorial of your number is %d:",mul);
    return 0;
}
