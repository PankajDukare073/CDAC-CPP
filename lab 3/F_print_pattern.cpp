/*
6:Write a program to print following pattern.
*
* *
* * *
* * * *
* * * * *
*/
#include <iostream>
using namespace std;
int main()
{
    int rows;
    cout << "How many number of rows we want to print: ";
    cin >> rows;
    for (int i = 0; i <rows; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
    return 0;
}
