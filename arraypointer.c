#include <stdio.h>
int main()
{
int a[10],n,i,item,c=0;

do
{
printf("Enter limit:(1-10)::");
scanf("%d",&n);
}while(n<1 || n>10);

printf("Please enter %d values:",n);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
printf("Item to count:");
scanf("%d",&item);
for(i=0;i<n;i++)
{
if(a[i]==item)
{
c++;
}
}
printf("Frequency of %d = %d",item,c);
return 0;
}

