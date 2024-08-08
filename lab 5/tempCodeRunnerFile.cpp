/*
3:Create a abstract class Shape with pure virtual method area;
Create Rectangle,Circle,Square class..inherit them from Shape class..Override area method.
Test these all classes by creating object of respective class.
*/
#include <iostream>
using namespace std;

class Shape
{
public:
    virtual double area() = 0;
};

class Rectangle : public Shape
{
private:
    double length;
    double width;

public:
    Rectangle(double l, double w)
    {
        this->length=l;
        this->width=w;
    }
    double area ()
    {
        return length * width;
    }
};
class Circle : public Shape
{
private:
    double radius;

public:
    Circle(double r)
    {
        this->radius=r;
    }
    double area()
    {
        return 3.14 * radius * radius;
    }
};
class Square : public Shape
{
private:
    double side;

public:
    Square(double s)
    {
        this->side=s;
    }
    double area()
    {
        return side * side;
    }
};

int main()
{

    Rectangle r(5, 3);
    cout << "Area of Rectangle: " << r.area() << endl;

 
    Circle c(4);
    cout << "Area of Circle: " << c.area() << endl;

    Square s(6);
    cout << "Area of Square: " << s.area() << endl;

    return 0;
}
