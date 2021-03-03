#include <stdio.h>

int MAXSIZE = 10;
int stack[10];
int top = -1;

int isempty()
{

if(top == -1)
return 1;
else
return 0;
}

int isfull()
{

if(top == MAXSIZE)
return 1;
else
return 0;
}

int peek() {
return stack[top];
}

int pop()
{
int data;

if(!isempty())
{
data = stack[top];
top = top - 1;
return data;
}
else
{
printf("Could not retrieve data, Stack is empty.\n");
}
}

int push(int data)
{

if(!isfull())
{
top = top + 1;
stack[top] = data;
} else
{
printf("Could not insert data, Stack is full.\n");
}
}

int main()
{
int c=0;
// push items on to the stack
push(13);
push(5);
push(9);
push(12);
push(1);
push(14);
push(15);

printf("Element at top of the stack: %d\n" ,peek());
printf("Elements: \n");

// print stack data
int temp=top;
while(!isempty())
{

printf("%d\n",stack[top]);
top--;
}
while(temp!=-1)
{
if(stack[temp]%2==0)
{
c++;
}
temp--;
}
printf("\nTotal even numbers: %d",c);

return 0;
}
