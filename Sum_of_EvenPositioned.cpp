#include <iostream>
using namespace std;
int reverse(int n) //passing integer as argument
{
   int rev = 0;
	while (n != 0)  //checks number is not equal to zero
 {
		rev = (rev * 10) + (n % 10);    //reversing the number for process
		n /= 10;
	}
	return rev;     //returns reverse value
}
void getSum(int n)            //passing number for calculation
 {
  n = reverse(n);
	int sumEven = 0, count = 1;
	while (n != 0)
        {
           if (count % 2 == 0)
			sumEven += n % 10;        //sum of even number
		n /= 10;
		count++;
	}
cout<<"------------------------ \n";
	cout << "Sum of even positioned is = " << sumEven;
}
int main()
{
   int n;
	cout<<"Enter the number for summation: \n";   //taking input for user
	cin>>n;
	getSum(n);   //passing number to getSum function;
	return 0;
}
