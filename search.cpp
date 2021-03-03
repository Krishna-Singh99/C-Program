#include <iostream>
#include <malloc.h>
using namespace std;
//creating the structure of a new node
struct node
{
int num;
node *nextptr;
}*stnode;

void createList(int n) //function to create linked list.
{
struct node *frntNode, *tmp;
int num, i;

stnode = (struct node *)malloc(sizeof(struct node));
if(stnode == NULL)
{
cout<<"Memory can not be allocated";
}
else
{

cout<<"Enter the data for node 1: ";
cin>>num;
stnode-> num = num;
stnode-> nextptr = NULL; //Links the address field to NULL
tmp = stnode;

for(i=2; i<=n; i++)
{
frntNode = (struct node *)malloc(sizeof(struct node));


if(frntNode == NULL) //If frntnode is null no memory cannot be allotted
{
cout<<" Memory can not be allocated";
break;
}
else
{
cout<<"Enter the data for node "<<i<<": "; // Entering data in nodes.
cin>>num;
frntNode->num = num;
frntNode->nextptr = NULL;
tmp->nextptr = frntNode;
tmp = tmp->nextptr;
}
}
}
}

void display() //function to print linked list
{
struct node *tmp;
if(stnode == NULL)
{
cout<<" No data found in the list";
}
else
{
tmp = stnode;
cout<<"Linked List: ";
while(tmp != NULL)
{
cout<<"\t"<<tmp->num;
tmp = tmp->nextptr;
}
}
}

void insertatEnd(int num)//function to add element at the end
{
struct node *frntNode, *tmp;
frntNode = (struct node*)malloc(sizeof(struct node));
if(frntNode == NULL)
{
cout<<"Memory can not be allocated.";
}
else
{
frntNode->num = num; //Linking the data part
frntNode->nextptr = NULL;
tmp = stnode;
while(tmp->nextptr != NULL)
tmp = tmp->nextptr;
tmp->nextptr = frntNode; //Linking the address part
}
}
void search_number(int sh)
{
ptr

}


int main()
{
int n,num,sh;

cout<<"Enter the number of nodes: ";
cin>>n;
createList(n);
cout<<"\nLinked list data: \n";
display();
cout<<"\nEnter data you want to insert at the end: ";
cin>>num;
insertatEnd(num);
cout<<"\nLinked list after insertion: \n";
display();
cout<<"\nEnter data you want to search:";
cin>>sh;

return 0;
}

