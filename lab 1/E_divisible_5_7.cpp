//Write a program to accept a number and check if it is divisible by 5 and 7.
#include<iostream>
using namespace std;
int main()
{
    int num;
    cout<<"Enter the number to check divisible by 5 and 7:";
    cin>>num;
	if(num%5==0 && num%7==0)
	{
		cout<<"the number "<<num<<" is divisible by 5 and 7.."<<endl;
	}
	else
	{
		cout<<"the number "<<num<<" is not divisible by 5 and 7.."<<endl;
	}
    return 0;
}