/*7. Accept a lowercase character from the user and check whether the character is a vowel or consonant. 
(Hint: a, e, i, o, u are vowels)*/
#include<iostream>
using namespace std;
int main()
{
	char ch='a';
    cout<<"Enter the lower character to check chracter is  vowel or consonant:";
	cin>>ch;
	if(ch=='a'|| ch=='i' || ch=='o' || ch=='e' || ch=='u' )
	{
		cout<<"The character "<<ch<<" is vowel."<<endl;
	}
	else
	{
		cout<<"The character "<<ch<<" is consonant."<<endl;
	}
    
}