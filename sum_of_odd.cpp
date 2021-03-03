#include<iostream>
using namespace std;
class Node
{
    public:
    int data;
    Node* next;

};
Node* head;
void Insert(int data, int n)
{
    Node* temp1=new Node();
    temp1->data=data;
    temp1->next=NULL;
    if(n==1)
    {
         temp1->next=head;
        head=temp1;
        return;
    }
    Node* temp2=head;
    for(int i=0;i<n-2;i++)
    {
        temp2=temp2->next;
    }
    temp1->next=temp2->next;
        temp2->next=temp1;

}
    void Print(Node* head)

    {
    while(head!=NULL)
    {
        cout<<head->data<<" ";
        head=head->next;
    }
}
int main()
{
    head=NULL;
    Insert(12,1);
    Insert(13,2);
    Insert(14,3);
    Print(head);
    return 0;
}
