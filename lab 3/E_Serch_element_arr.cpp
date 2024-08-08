//5:Write a program to accept array  from user .Accept number from user and search number is present in array or not.
#include<iostream>
using namespace std;
int main()
{
	int size,search,sflag=0;
	cout<<"how many element you want to add in array:";
	cin>>size;
	int arr[size];

	//store element of array
	for(int i=0;i<size;i++)
	{
		cout<<"Enter the "<<i<<"th element:";
		cin>>arr[i];
	}
	
	//traverse the array
	cout<<"Array element are:";
	for(int i=0;i<size;i++)
	{
		cout<<arr[i]<<" ";
	}
	//search element in array
    cout<<"\nEnter element which you want to search:";
    cin>>search;
	for(int i=0;i<size;i++)
	{
		if(arr[i]==search)
		{
			sflag=1;
			cout<<"The element "<<search<<" is present at "<<i<<"th position"<<endl;
			break;
		}
	}
	if(sflag==0)
	{
		cout<<"The element "<<search<<"is not present in array"<<endl;
	}
	return 0;
}