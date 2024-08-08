/*
3. Create a class Book with data members as bname,id,author,price. Write getters and setters for all the
data members. Also add the display function. Create Default and Parameterized constructors. Create
the object of this class in main method and invoke all the methods in that class.
*/
#include <iostream>
#include <string>
using namespace std;
class Book
{
    private:
        int id;
        string bname;
        string author;
        float price;
    public:
        // Default constructor
        Book()
        {
            bname = "";
            id = 0;
            author = "";
            price = 0.0;
        }

        // Parameterized constructor
        Book(int id,string name, string auth, float price)
        {
            id = id;
            bname = name;
            author = auth;
            price = price;
        }

        // Getter
        string getBname()
        {
            return bname;
        }

        int getId()
        {
            return id;
        }

        string getAuthor()
        {
            return author;
        }

        float getPrice()
        {
            return price;
        }

        //setter
        void setBname(string name)
        {
            bname = name;
        }

        void setId(int bookId)
        {
            id = bookId;
        }
        
        void setAuthor(string auth)
        {
            author = auth;
        }

        void setPrice(float bookPrice)
        {
            price = bookPrice;
        }

        // Display
        void display()
        {
            cout<<"Book Details are:"<<endl;
             cout << "ID:" << id << endl;
            cout << "Name:" << bname << endl;
            cout << "Author:" << author << endl;
            cout << "Price:" << price << endl;
        }
};

int main()
{
    Book b1;
    cout << "\nUsing default constructor:" << endl;
    b1.display();
    

    Book b2(101,"C programming", "pankaj dukare", 100.67);
    cout << "\nUsing Parameterized constructor:" << endl;
    b2.display();
    cout << endl;

    Book b3;
    b3.setId(102);
    cout<<"\nwe set data using setters:"<<endl;
    b3.setBname("Java Programming");
    b3.setAuthor("Dukare pankaj");
    b3.setPrice(121.99);
    b3.display();

    cout<<"\nWe get the data using getters:"<<endl;
    
    cout<<"Book Details are:"<<endl;
    cout << "ID:" << b3.getId() << endl;
    cout << "Name:" << b3.getBname() << endl;
    cout << "Author:" <<b3.getAuthor() << endl;
    cout << "Price:" << b3.getPrice() << endl;

    return 0;
}
