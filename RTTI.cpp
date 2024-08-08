#include <iostream>
#include <typeinfo>
using namespace std;
class Fruit
{
private:
	string name;
	string color;
	double price;

public:
	Fruit(string n, string c, double p)
	{
		this->name = n;
		this->color = c;
		this->price = p;
	}
	void display()
	{
		cout << "the fruit detils is:" << endl;
		cout << "name=" << name << " color=" << color << " price=" << price << endl;
	}
	virtual void taste()
	{
		cout << "the fruit has different taste" << endl;
	}
};
class Apple : public Fruit
{
public:
	Apple(string n, string c, double p) : Fruit(n, c, p) {}

	void taste()
	{
		cout << "Apple is sweet" << endl;
	}
	void ajuice()
	{
		cout << "apple juice" << endl;
	}
};
class Orange : public Fruit
{
public:
	Orange(string n, string c, double p) : Fruit(n, c, p) {}

	void taste()
	{
		cout << "orange is sour" << endl;
	}
	void ojuice()
	{
		cout << "orange juice" << endl;
	}
};
class Mango : public Fruit
{
public:
	Mango(string n, string c, double p) : Fruit(n, c, p) {}

	void taste()
	{
		cout << "mango  is sweet or sour" << endl;
	}
	void pulp()
	{
		cout << "we extract mango pulp" << endl;
	}
};
int main()
{
	int size, choice, counter = -1;
	cout << "Enter the size of your basket:";
	cin >> size;
	Mango *m;
	Orange *o;
	Fruit *f[size];
	do
	{
		cout << "\n1.add mango 2.add orange 3.add apple 4.show all 5.exit" << endl;
		cout << "Enter your choice:";
		cin >> choice;
		switch (choice)
		{
		case 1:
			if (counter < size)
			{

				cout << "we add mango" << endl;
				m = new Mango("ratnagiri", "yello", 23.6);
				counter++;
				f[counter] = m;
				cout << "mango added succefully" << endl;
			}
			else
			{
				cout << "basket full" << endl;
			}
			break;
		case 2:
			if (counter < size)
			{

				cout << "we add orange" << endl;
				o = new Orange("nagpur", "yellow and orange", 89.67);
				counter++;
				f[counter] = o;
				cout << "orange added succefully" << endl;
			}
			else
			{
				cout << "basket full" << endl;
			}
			break;
			break;
		case 3:
			cout << "we add Apple" << endl;
			break;
		case 4:
			cout << "your basket details is:";
			for (int i = 0; i < 2; i++)
			{
				f[i]->display();
				f[i]->taste();
				if (typeid(*f[i]) == typeid(Mango))
				{
					cout << "this is mango" << endl;
					Mango *m = dynamic_cast<Mango *>(f[i]);
					m->pulp();
				}
				if (typeid(*f[i]) == typeid(Orange))
				{
					cout << "this is orange" << endl;
					Orange *m = dynamic_cast<Orange *>(f[i]);
					m->ojuice();
				}
			}
			break;
		case 5:
			cout << "thank you for using our application....." << endl;
			break;
		default:
			cout << "you enter the wrong choice...." << endl;
			break;
		}
	} while (choice != 5);
	cout << "Fruit basket application" << endl;
	return 0;
}