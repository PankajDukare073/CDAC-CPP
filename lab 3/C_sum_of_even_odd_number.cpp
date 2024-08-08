// 3:. Write a  program to find sum of all even and odd numbers between 1 to n.
#include <iostream>
using namespace std;
int main()
{
    int num, se = 0, so = 0;
    cout << "Enter value of n to fined sum of even and odd number:";
    cin >> num;
    for (int i = 1; i <= num; i++)
    {
        if (i % 2 == 0)
        {
            se += i;
        }
        else
        {
            so += i;
        }
    }
    cout << "The sum of Even number is " << se << " and sum of Odd is " << so << endl;
    return 0;
}