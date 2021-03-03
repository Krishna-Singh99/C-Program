#include<stdio.h>
#include<conio.h>
struct Node
{
    int data;
    struct Node *next;

};
typedef struct Node node;
int main()
{
    int r;
    node *first=NULL;
     node *second=NULL;
      node *third=NULL;
      first=(node *) malloc(sizeof(node));
      second=(node *) malloc(sizeof(node));
      third=(node *) malloc(sizeof(node));
      printf("Enter the range \n");
      scanf("%d",&r);
      for(int i=1;i<r;i++)
      {

      first->data=10;
      first->next=second;
      second->data=20;
      second->next=third;
      third->data=40;
      third->next=NULL;
      }
      printf("\n  Data of first node=%d",first->data);
      printf("\n  Data of first node=%d",second->data);
      printf("\n  Data of first node=%d",third->data);
      return 0;

}
