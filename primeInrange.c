#include <stdio.h>
#include<conio.h>
int main() {
int beg, end, i, flag,temp;
printf("Enter two numbers(intervals): ");
scanf("%d %d", &beg, &end);
printf("Prime numbers between %d and %d are: ", beg, end);
if(beg>end)
{
    temp=beg;
    beg=end;
    end=temp;
}
while (beg < end)
{
flag = 0;
if (beg <= 1)
{
++beg;
continue;
}

for (i = 2; i <= beg / 2; ++i)
{
if (beg % i == 0)
{
flag = 1;
break;
}
}

if (flag == 0)
printf("%d ", beg);
++beg;
}

return 0;
}

