/*
5. Create a class ComplexNumber with data members real, imaginary.
Create Default and Parameterized constructors.Write getters and setters for all the data members.
 Also add the display function. Create the object of this class in main method and invoke all the methods in that class.
*/
#include <iostream>
using namespace std;
class ComplexNumber
{
    private:
        float real;
        float img;
    public:
        // Default constructor
        ComplexNumber()
        {
            this->real = 0.0;
            this->img = 0.0;
        }
        // Parameterized constructor
        ComplexNumber(float r, float i)
        {
            this->real = r;
            this->img = i;
        }

        //setters
        float getReal()
        {
            return real;
        }

        float getImg()
        {
            return img;
        }

        //getters
        void setReal(float r)
        {
            this->real = r;
        }

        void setImg(float i)
        {
             this->img = i;
        }

        // Display details
        void display()
        {
            cout << "Complex Number: " << real << " + " << img << "i" << endl;
        }
};

int main() {
    ComplexNumber cn1;
    cout<<"using default constructor:"<<endl;
    cn1.display();

    ComplexNumber cn2(2.7,8.4);
    cout<<"\nusing Parametries constructor:"<<endl;
    cn2.display();

    ComplexNumber cn3;
    cout<<"\nSet the data using setters:"<<endl;
    cn3.setReal(3.8);
    cn3.setImg(4.9);
    cn3.display();

    cout<<"\nget the data using getter:"<<endl;
    cout << "Complex Number: " << cn3.getReal ()<< " + " <<cn3.getImg()<< "i" << endl;

    return 0;
}
