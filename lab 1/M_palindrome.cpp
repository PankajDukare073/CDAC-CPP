//13:Check whether the number is palindrome or not?
#include<iostream>
using namespace std;
int main()
{
    int num,rem,revnum=0,temp;
    cout<<"Enter the number to check Number is Palindrome or Not:";
	cin>>num;
	temp=num;
	while(num>0)
	{
		rem=num%10;
		revnum=revnum*10+rem;
		num=num/10;
	}
	if(temp==revnum)
	{
		cout<<"the number "<<temp<<" is palindrome number..."<<endl;
	}
	else
	{
		cout<<"the number "<<temp<<" is not palindrome number..."<<endl;
	}
    return 0;
}