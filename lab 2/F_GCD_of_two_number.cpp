//6.Accept two numbers and calculate GCD of them.
#include <iostream>
using namespace std;
int main()
{
    int num1,num2,min;
    cout<<"Enter the two number to fined gcd of them:";
	cin>>num1>>num2;
	min=num1;
	if(num1>num2)   
		min=num2;
	for(int i=min;i>=1;i--)
	{
		if(num1%i==0 && num2%i==0)
		{
			 cout << "GCD of " << num1 << " and " << num2 << " is: " <<i<< endl;
			break;
		}
	}
    return 0;
}
