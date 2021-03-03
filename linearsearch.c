#include <stdio.h>
#include <stdlib.h>
#include <stdio.h>

int main()
{
int a[10],i,n,loc=-1,item;
do
{
printf("Enter the Limit:");
scanf("%d",&n);
}while(n < 0 || n > 10);
printf("Enter %d values:\n",n);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
printf("Enter item to search:");
scanf("%d",&item);
for(i=0;i<n;i++)
{
if(a[i]==item)
{
loc=i;
continue;
}
}
if(loc==-1)
{
printf("Item not there. . . ");
}
else
{
printf("%d present at %d index",item,loc);
}
return 0;
}

