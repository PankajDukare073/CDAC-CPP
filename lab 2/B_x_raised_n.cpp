//2. Write a program to accept two integers x and n and compute x raised to n.
#include<iostream>
using namespace std;
int main()
{
    int x,n,res=1;
    cout<<"Enter the value of x and n and compute x raised to n:";
    cin>>x>>n;
    for(int i=0;i<n;i++)
    {
        res*=x;
    }
    cout<<"the value "<< x<<" raised to "<< n<<" is "<<res<<endl;
    return 0;
}