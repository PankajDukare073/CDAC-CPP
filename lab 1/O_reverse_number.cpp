//15: Write a  program to enter a number and print its reverse.
#include<iostream>
using namespace std;
int main()
{
    int num,rem,revnum=0,temp;
    cout<<"Enter the number to Reverse it:";
	cin>>num;
    temp=num;
	while(num>0)
	{
		rem=num%10;
		revnum=revnum*10+rem;
		num=num/10;
	}
	cout<<"the number "<<temp<<" after reverse is "<<revnum<<endl;
    return 0;
}