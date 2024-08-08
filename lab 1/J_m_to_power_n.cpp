//10:Write a program to find m to the power n. m=3 and n=4 so 3*3*3*3
#include<iostream>
using namespace std;
int main()
{
    int n,m,res=1;
    cout<<"Enter the value of and m to fined m to power of n.:";
    cin>>m>>n;
    for (int i = 0; i < n; ++i)
    {
        res*= m;
    }
    cout<<"The power of "<<m<<" to "<<n<<" is "<<res<<endl;
    return 0;
}