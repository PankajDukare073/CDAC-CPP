//2: Write a program to Accept a number and display its sum of digits.:ex 568    5+6+8
#include<iostream>
using namespace std;
int main()
{
    int num,rem,sum=0,temp;
    cout<<"Enter the number to Fined sum of number:";
	cin>>num;
	temp=num;
	while(num>0)
	{
		rem=num%10;
		sum+=rem;
		num=num/10;
	}
	
    cout<<"The Sum of number "<<temp<<" digit are "<<sum<<endl;
    return 0;
}