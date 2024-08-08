#include <iostream>
using namespace std;
class Fruit
{
private:
    string name;
    string color;

public:
    Fruit(string name, string color)
    {
        this->name = name;
        this->color = color;
    }
    virtual void taste() = 0;
    void dispaly()
    {
        cout << "fruit details are:";
        cout<<"name="<<name<<" color="<<color<<endl;
    }
};
class Mango : public Fruit
{
public:
    Mango(string name, string color) : Fruit(name, color) {}
    void taste()
    {
        cout << "Mango taste is sweet" << endl;
    }
    void pulp()
    {
        cout << "We extracted mango pulp succefully" << endl;
    }
};
class Orange : public Fruit
{
public:
    Orange(string name, string color) : Fruit(name, color) {}
    void taste()
    {
        cout << "Orange taste is sour" << endl;
    }
    void orangeJuice()
    {
        cout << "We Create Orange succefully" << endl;
    }
};
class Apple : public Fruit
{
public:
    Apple(string name, string color) : Fruit(name, color) {}
    void taste()
    {
        cout << "Apple taste is sweet" << endl;
    }
    void applejam()
    {
        cout << "We Create apple jam succefully" << endl;
    }
};
int main()
{
    int choice, capacity, counter = -1;
    cout << "Please enter the size of your basket:";
    cin >> capacity;
    // crete object
    // create object all classes
    Fruit *f[capacity];
    Mango *m;
    Orange *o;
    Apple *a;
    do
    {
        cout << "current counter:" << counter << endl;
        cout << "\n1.Add Mango 2.Add orange 3.Apple 4.Show all 5.Exit.." << endl;
        cout << "Enter your choice:";
        cin >> choice;
        switch (choice)
        {
        case 1:
            if (counter < capacity - 1)
            {
                m = new Mango("ratnagiri","yellow");
                counter++;
                f[counter] = m;
                cout << "Mango Added succefully:" << endl;
            }
            else
            {
                cout << "Your basket is full" << endl;
            }
            break;
        case 2:
            if (counter < capacity - 1)
            {
                o = new Orange("nagpur","range color");
                counter++;
                f[counter] = o;
                cout << "orange Added Suceefully" << endl;
            }
            else
            {
                cout << "Your basket is full" << endl;
            }

            break;
        case 3:
            if (counter < capacity - 1)
            {
                a = new Apple("kashmir","red");
                counter++;
                f[counter] = a;
                cout << "Apple Added succefully:" << endl;
            }
            else
            {
                cout << "Your basket is full" << endl;
            }

            break;
        case 4:
            if (counter == -1)
            {
                cout << "the basket is Empty...." << endl;
            }
            else
            {
                cout << "We view all fruit details" << endl;
                for (int i = 0; i <= counter; i++)
                {
                    cout << "\nBasket fruit " << i + 1 << " Deatails" << endl;
                    f[i]->dispaly();
                    f[i]->taste();
                    if (typeid(*f[i]) == typeid(Mango))
                    {
                        cout << "this is mango" << endl;
                        Mango *bm = dynamic_cast<Mango *>(f[i]);
                        bm->pulp();
                    }
                    else if (typeid(*f[i]) == typeid(Orange))
                    {
                        cout << "this is orange" << endl;
                        Orange *bo = dynamic_cast<Orange *>(f[i]);
                        bo->orangeJuice();
                    }
                    else
                    {
                        cout << "this is Apple" << endl;
                        Apple *ba = dynamic_cast<Apple *>(f[i]);
                        ba->applejam();
                    }
                }
            }
            break;
        case 5:
            cout << "thank you....." << endl;
            break;
        default:
            cout << "you enter the wrong choice..........." << endl;
        }
    } while (choice != 5);
    return 0;
}