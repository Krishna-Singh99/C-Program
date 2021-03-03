#include <iostream>
using namespace std;

// template function
template <class T1,class T2>
T1 Large(T1 n1, T2 n2)
{
cout<<((n1 > n2) ? n1 : n2)<<endl;
return n1;
}

int main()
{
int i1, i2;
float f1, f2;

cout << "Enter two integers:\n";
cin >> i1 >> i2;
cout << "\nEnter two floating-point numbers:\n";
cin >> f1 >> f2;
int qq;
qq=Large(i1, f1);
cout<<qq<<endl;
qq= Large(f2,i2);

return 0;
}
