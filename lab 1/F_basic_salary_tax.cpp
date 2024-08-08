/*6. Write a program, which accepts annual basic salary of an employee and calculates and displays the
Income tax as per the following rules.
Basic: < 1, 50,000 Tax = 0
 1, 50,000 to 3,00,000 Tax = 20%
 > 3,00,000 Tax = 30% */
#include <iostream>
using namespace std;
int main()
{
    double basicsal, tax = 0;
    cout << "Enter the basic salary of employee: ";
    cin >> basicsal;
    if(basicsal<=150000)
    {
        tax=0;
    }
    else if(basicsal>150000 && basicsal<=300000)
    {
        tax=0.2*(basicsal-150000);
    }
    else
    {
        tax=0.3*(basicsal-300000)+30000; 
    }
    cout << "Income tax of employee is "<<tax<<endl;
    return 0;
}