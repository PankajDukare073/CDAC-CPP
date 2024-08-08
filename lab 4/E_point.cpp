/*
4. Create a class Point with data members as x,y. Create Default and Parameterized constructors. Write 
getters and setters for all the data members. Also add the display function. Create the object of this 
class in main method and invoke all the methods in that class. 
*/
#include <iostream>
using namespace std;
class Point
{
    private:
        float x;
        float y;
    public:
        // Default constructor
        Point()
        {
            x = 0.0;
            y = 0.0;
        }
        
        // Parameterized constructor
        Point(float xValue, float yValue)
        {
            x=xValue;
            y=yValue;
        }

        // Getter 
        float getX()
        {
            return x;
        }

         float getY()
        {
            return y;
        }

        //setter
        void setX(float xValue)
        {
            x = xValue;
        }

        void setY(float yValue)
        {
            y = yValue;
        }

        // Display
        void display()
        {
             cout << "Point: (" << x << ", " << y << ")" << endl;
        }
};
int main()
{
    Point p1;
    cout << "we create point using default constructor:" << endl;
    p1.display();

    Point p2(4.7,2.8);
    cout << "\nwe create point using Parameterized constructor:" << endl;
    p2.display();

    Point p3;
    cout<<"\nwe set the point data using setters:"<<endl;
    p3.setX(4.2);
    p3.setY(9.3);
    p3.display();
    cout<<"\nwe get point detils using getters:"<<endl;
    cout << "Point: (" << p3.getX() << ", " << p3.getY() << ")" << endl;

    return 0;
}
