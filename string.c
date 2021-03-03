#include <stdio.h>
int main()
{
int a,b;
int *p;
printf("Address of a = %u b = %u",&a,&b);
p=&a;
printf("\n Value of p =%u",p);
a=10;
printf("\n Value of a using pointer =%d",*p);
return 0;
}
