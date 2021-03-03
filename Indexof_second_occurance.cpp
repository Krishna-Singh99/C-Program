#include<iostream>
using namespace std;
int main()
{
int range,i,j,f,match,count=0;
cout<<"Enter the range of the array:\n";
cin>>range;
int arr[range];
for(i=0;i<range;i++)
{
cout<<"Enter the no."<<endl;
cin>>arr[i];
}
cout<<"------------------------------------"<<endl;
cout<<"Prime numbers are "<<endl;

for(i=0;i<range;i++)
{
f=0;
for(j=2;j<arr[i];j++)
{
match=arr[i]%j;
count=i;
if(match==0)
{
f=1;
break;
}
}
if(f==0 && count==2)
cout<<arr[i]<<" "<<count+1<<endl;

}

return 0;

}
