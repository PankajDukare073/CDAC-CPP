//12:Sum of series :1+2+3+….+n
#include<iostream>
using namespace std;
int main()
{
    int n,sum=0;
    cout<<"Enter the n to fined series upto that:";
    cin>>n;
	for(int i=1;i<=n;i++)
	{
		sum+=i;
	}
	cout<<"the sum of Series 1+2+3+.......+"<<n<<" is "<<sum<<endl;
    return 0;
}