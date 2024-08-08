// 3.Write a program to accept a character, an integer n and display the next n characters.
#include <iostream>
using namespace std;
int main()
{
    char ch;
    int n;
    cout << "Enter a character and integer n: ";
    cin >> ch >> n;

    cout << "Next " << n << " characters after " << ch << " are: ";
    for (int i = 0; i <= n; i++)
    {
        cout << (char)(ch + i) << " ";
    }
    cout << endl;

    return 0;
}
