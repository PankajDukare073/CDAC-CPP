// 1:Write a program that accepts numbers continuously as long as the number is positive and prints the sum of the given numbers.
#include <iostream>
using namespace std;
int main()
{
    int num;
    int sum = 0;
    do
    {
        cout << "Enter the number (for exit enter negative):";
        cin >> num;
        if (num < 0)
        {
            break;
        }
        sum += num;
    } while (num > 0);
    cout << "Sum of the positive number are:" << sum << endl;
    return 0;
}
