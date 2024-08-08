// 3:Write a program to swap two numbers.
#include <iostream>
using namespace std;
int main()
{
    int num1, num2, temp;
    cout << "Enter the two number to perform Swapping:";
    cin >> num1 >> num2;
    // swaping logic
    cout << "The Number Before Swapping num1=" << num1 << " and num2=" << num2 << endl;
    temp = num1;
    num1 = num2;
    num2 = temp;
    cout << "The Number After Swapping num1=" << num1 << " and num2=" << num2 << endl;
    return 0;
}