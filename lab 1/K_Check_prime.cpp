//11:Check if number is a prime number or not.: 
#include<iostream>
using namespace std;
int main()
{
    int num,flag=1;
    cout<<"Enter the number to check prime or not:";
    cin>>num;
    for(int i=2;i<num;i++)
    {
        if(num%i==0)
        {
            flag=0;
            break;
        }
    }
    if(flag==1)
    {
        cout<<"The number "<<num<<" is Prime number."<<endl;
    }
    else
    {
        cout<<"The number "<<num<<" is not Prime number."<<endl;
    }
    return 0;
}