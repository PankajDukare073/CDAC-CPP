/*7. Write a menu driven program to do following operations :
a) Compute area of circle
b) Compute area of rectangle
c) Compute area of triangle
d) Exit
Display menu, ask choice to the user, depending on choice accept the parameters and perform the
operation. Continue this process until user selects exit option.*/
#include <iostream>
using namespace std;
int main()
{
    char choice;
    float radius, length, width, base, height;
    do
    {
        cout << "\nMenu:\n";
        cout << "a) Compute area of circle\n";
        cout << "b) Compute area of rectangle\n";
        cout << "c) Compute area of triangle\n";
        cout << "d) Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 'a':
            cout << "Enter the radius of the circle: ";
            cin >> radius;
            cout << "Area of the circle: " << 3.14 * radius * radius << endl;
            break;
        case 'b':
            cout << "Enter the length and width of the rectangle: ";
            cin >> length >> width;
            cout << "Area of the rectangle: " << length * width << endl;
            break;
        case 'c':
            cout << "Enter the base and height of the triangle: ";
            cin >> base >> height;
            cout << "Area of the triangle: " << 0.5 * base * height << endl;
            break;
        case 'd':
            cout << "thank you..........." << endl;
            break;
        default:
            cout << "We enter wrong choice select a proper choice......." << endl;
        }
    } while (choice != 'd');
    return 0;
}
