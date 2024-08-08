/*
1. Create a class Person with data members as name, age, city. Write getters and setters for all the data
members. Also add the display function. Create Default and Parameterized constructors. Create the
object of this class in main method and invoke all the methods in that class.
*/
#include <iostream>
#include <string>
using namespace std;
class Person
{
    private:
        string name;
        int age;
        string city;
    
    public:
        // Default constructor
        Person()
        {
            this->name = "xyz";
            this->age = 0;
            this->city = "abc";
        }
    
        // Parameterized constructor
        Person(string name, int age, string city)
        {
            this->name = name;
            this->age = age;
            this->city = city;
        }
    
        // Getter
        string getName()
        {
            return name;
        }
    
        int getAge()
        {
            return age;
        }
    
        string getCity()
        {
            return city;
        }
    
        // setter
        void setName(string name)
        {
            name = name;
        }
    
        void setAge(int age)
        {
            age = age;
        }
    
        void setCity(string city)
        {
            city = city;
        }
    
        // Display
        void display()
        {
            cout << "Person details are:" << endl;
            cout << "Name:" << name << endl;
            cout << "Age:" << age << endl;
            cout << "City:" << city << endl;
        }
};

int main()
{

    Person p1;
    cout << "We set data using default constructor:" << endl;
    p1.display();

    Person p2("Pankaj", 30, "pune");
    cout << "\nWe set data using Parameterized constructor:" << endl;
    p2.display();

    Person p3;
    cout << "\nWe set data using Setters:" << endl;
    p3.setName("Dukare");
    p3.setAge(25);
    p3.setCity("nashik");
    p3.display();

    cout << "\nWe gate the data using getters:" << endl;
    cout << "Person details are:" << endl;
    cout << "Name:" << p3.getName() << endl;
    cout << "Age:" << p3.getAge()<< endl;
    cout << "City:" << p3.getCity() << endl;

    return 0;
}
