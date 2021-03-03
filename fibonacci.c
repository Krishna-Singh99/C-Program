#include <stdio.h>
int main()
{
    int i,num1 = 0, num2 = 1, moveTonext;

    printf("Fibonacci Series till 1000: ");
    for (i = 1; i <= 10; ++i)
    {

        printf("%d ", num1);
 moveTonext= num1+num2;
        num1 = num2;
        num2 = moveTonext;

    }

    return 0;
}
