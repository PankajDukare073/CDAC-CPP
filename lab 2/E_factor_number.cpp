//5. Write a program to calculate factors of a given number.
#include<iostream>
using namespace std;
int main()
{
    int num;
    cout<<"Enter the number to fined factors of it:";
    cin>>num;

	cout<<"the factors of number "<<num<<" are:";
	for(int i=1;i<=num;i++)
	{
		if(num%i==0)
		{
			cout<<i<<" ";
		}
	}
    return 0;
}