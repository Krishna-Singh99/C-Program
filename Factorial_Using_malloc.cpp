#include <iostream>
using namespace std;
void Factorial(int n)
{
    int fact=1,i;
    for(i=1;i<=n;i++)
    {
        fact=fact*i;


    }
    cout<<"Factorial : "<<fact;
}
int main()
{
    int n,*ptr;
    cout<<"ENTER A NUMBER FOR FACTORIAL"<<endl;
    cin>>n;
    ptr = (int*)malloc(n * sizeof(int));
    if (ptr == NULL)
    {
        printf("Memory not allocated.\n");
        exit(0);
    }
    else
    {
        printf("Memory successfully allocated using malloc.\n");
    }
    Factorial(n);

    return 0;
}
