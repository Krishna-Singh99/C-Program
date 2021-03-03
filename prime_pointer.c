#include<iostream>
using namespace std;
int main()
{
struct node
{
int data;
struct node* next;
struct node* prev;
} *temp,*head,*last,*temp2;
int choice=1;
last=0;
cout<<"inserting the node";
while(choice==1)
{
temp=new node();
cout<<"Enter the data of node";
cin>>temp->data;
if(last==0)
{
head=last=temp;
temp->prev=0;
temp->next=0;
}
else
{
last->next=temp;
temp->prev=last;
last=temp;
last->next=0;
}
int i,m,flag=0;
static int count=0;
m=temp->data/2;
for(i=2;i<m;i++)
{
if(temp->data%i==0)
{
cout<<"number is not prime"<<endl;
flag=1;
break;
}
}
if(flag==0)
{
cout<<"Number is prime"<<endl;
count++;
}
cout<<"number of prime number"<<count;
cout<<"Do you want to continue";
cin>>choice;
}
return 0;
}
