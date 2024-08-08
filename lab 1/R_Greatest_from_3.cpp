// 18:Write a program to find greatest of three numbers using nested if-else.
#include <iostream>
using namespace std;

int main()
{
    int num1, num2, num3;
    cout << "Enter three number to fined greatest: ";
    cin >> num1 >> num2 >> num3;

    if (num1 >= num2)
    {
        if (num1 >= num3)
        {
            cout <<"the number "<< num1 <<" is the greatest." << endl;
        }
        else
        {
            cout <<"the number "<< num3 <<" is the greatest." << endl;
        }
    }
    else
    {
        if (num2 >= num3)
        {
             cout <<"the number "<< num2 <<" is the greatest." << endl;
        }
        else
        {
            cout <<"the number "<< num3 <<" is the greatest." << endl;
        }
    }

    return 0;
}
