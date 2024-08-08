 //Write a program to accept an integer and check if it is even or odd.
#include<iostream>
using namespace std;
int main()
{
    int num;
    cout<<"Enter the number to check it even or odd:";
    cin>>num;
    if(num%2==0)
    {
        cout<<"the number "<<num<<" is even."<<endl;
    }
    else
    {
         cout<<"the number "<<num<<" is odd."<<endl;
    }
    return 0;
}