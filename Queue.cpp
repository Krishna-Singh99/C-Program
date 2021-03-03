#include<iostream>
#define maxsize 5
using namespace std;
void Insert();
void Delete();
void Display();
int front = -1, rear = -1;

int queue[maxsize];
void Insert()
{
int item;
cout<<"Enter the element\n";
cin>>item;
if(rear == maxsize-1)
{
cout<<"Queue is Overflow\n";
return;
}
if(front == -1 && rear == -1)
{
front = 0;
rear = 0;
}
else
{
rear = rear+1;
}
queue[rear] = item;
cout<<"Inserted successfully\n";

}
void Delete()
{
int item;
if (front == -1 || front > rear)
{
cout<<"Queue is underflow\n";
return;

}
else
{
item = queue[front];
if(front == rear)
{
front = -1;
rear = -1 ;
}
else
{
front = front + 1;
}
cout<<"Value deleted successfully\n";

}


}

void Display()
{
int i;
if(rear == -1)
{
cout<<"queue is empty"<<endl;
}
else
{
    cout<<"Elements are as follows"<<endl;
for(i=front;i<=rear;i++)
{
cout<<queue[i]<<endl;
}
}
}

int main ()
{
    cout<<"________WELCOME TO QUEUE PROGRAMMING______________"<<endl;
int ch;
while(ch != 4)
{
cout<<"Enter 1 for Inqueue \n Enter 2 for Dequeue, \n Enter 3 for Display, \n Enter 4 to exit \n";
cout<<"\nEnter your choice \n";
cin>>ch;
switch(ch)
{
case 1:
Insert();
break;
case 2:
Delete();
break;
case 3:
Display();
break;
case 4:
exit(0);
break;
default:
cout<<"Wrong Choice\n Please choose right option";
}
}
}
