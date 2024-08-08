/*21. Write a program, which accepts two integers and an operator as a
character (+ - * / ), performs the corresponding operation and displays the result.*/
#include <iostream>
using namespace std;
int main()
{
    int num1, num2, res;
    char op;
    cout << "Enter two integers: ";
    cin >> num1 >> num2;
    cout << "Enter an operator (+, -, *, /):";
    cin >> op;

    switch (op)
    {
    case '+':
        res = num1 + num2;
        break;
    case '-':
        res = num1 - num2;
        break;
    case '*':
        res = num1 * num2;
        break;
    case '/':
        res = double(num1 / num2);
        break;
    default:
        cout<<"You enter Invalid operator." << endl;
    }
    cout <<"After performing opertion result is "<<res<< endl;
    return 0;
}