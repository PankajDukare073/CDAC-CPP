/*
2. Create a class Date with data members as dd, mm, yy. Write getters and setters for all the data members. Also add the display function. Create Default and Parameterized constructors. Create the
object of this class in main method and invoke all the methods in that class.
*/
#include <iostream>
using namespace std;
class Date
{
    private:
        int dd;
        int mm;
        int yy;
    
    public:
        // Default constructor
        Date()
        {
            dd = 1;
            mm = 1;
            yy = 2000;
        }
    
        // Parameterized constructor
        Date(int d, int m, int y)
        {
            dd = d;
            mm = m;
            yy = y;
        }
    
        // Getter
        int getDay()
        {
            return dd;
        }
    
        int getMonth() 
        {
            return mm;
        }
    
        int getYear()
        {
            return yy;
        }
    
        //setter 
        void setDay(int day)
        {
            dd = day;
        }
    
        void setMonth(int month)
        {
            mm = month;
        }
    
        void setYear(int year)
        {
            yy = year;
        }
    
        // Display 
        void display()
        {
            cout << "Date: " << dd << "/" << mm << "/" << yy << endl;
        }
};

int main()
{
    Date d1;
    cout << "we set Date using default constructor:" << endl;
    d1.display();

    Date d2(15,02, 2000);
    cout << "\nwe set Date using Parameterized constructor:" << endl;
    d2.display();

    Date d3;
    cout<<"\nWe set the date using setters"<<endl;
    d3.setDay(25);
    d3.setMonth(12);
    d3.setYear(2002);
    d3.display();

    cout<<"\nwe get the date using getters:"<<endl;
    cout << "Date: " << d3.getDay() << "/" << d3.getMonth() << "/" <<d3.getYear()<< endl;

    return 0;
}
