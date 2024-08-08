//8. Write a  program to input angles of a triangle and check whether triangle is valid or not.
#include<iostream>
using namespace std;

int main()
{
    int a1,a2,a3;
    cout <<"Enter the three angles of the triangle:";
    cin >>a1>>a2>>a3;
    if((a1+a2+a3)== 180)
    {
        cout << "The triangle is valid." << endl;
    }
    else
    {
        cout << "The triangle is not valid." << endl;
    }
    return 0;
}