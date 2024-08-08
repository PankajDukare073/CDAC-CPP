// 17:Write a program to check entered number is Armstrong number or not.
#include <iostream>
using namespace std;
int main()
{
    int num, rem, arm = 0, temp;
    cout << "Enter the number to check Number is Armstrong or Not:";
    cin >> num;
    temp = num;
    while (num > 0)
    {
        rem = num % 10;
        arm = arm + (rem * rem * rem);
        num = num / 10;
    }

    if (temp == arm)
    {
        cout << "the number " << temp << " is Armstrong number..." << endl;
    }
    else
    {
        cout << "the number " << temp << " is not Armstrong number..." << endl;
    }

    return 0;
}