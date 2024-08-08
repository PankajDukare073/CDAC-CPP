// 4. Write a program to calculate factorial of a number.
// For e.g. factorial of 5 = 5! = 5 *4*3*2*1 = 120
#include <iostream>
using namespace std;
int main()
{
    int num, fact = 1;
    cout << "Enter the number to fined factorial of it:";
    cin >> num;

    for (int i = num; i > 0; i--)
    {
        fact *= i;
    }
    cout << "the factorial of number " << num << " is "<<fact;
    return 0;
}