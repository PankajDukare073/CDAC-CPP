//8. Write a program to print all prime numbers between 1 to n
#include <iostream>
using namespace std;
int main()
{
    int n, flag;
    cout << "Enter value of n up to you want to print prime number:";
    cin >> n;
    cout<<"Prime number between 1 to "<<n<<" are:";
    for (int i = 2; i < n; i++)
    {
        flag = 1;
        for (int j = 2; j < i; j++)
        {
            if (i % j == 0)
            {
                flag = 0;
                break;
            }
        }
        if (flag == 1)
        {
            cout << i << " ";
        }
    }
    return 0;
}