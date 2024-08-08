/*
1 Solve this.
Fresh business scenario to apply inheritance , polymorphism   to emp based organization scenario.

Create Emp based organization structure --- Emp , Mgr , Worker
1.1 Emp ->  state--- id(int), name, deptId , basicSalary(double)
            Accept all of above in constructor arguments.

            Methods ---
            1.2. compute net salary ---ret 0
                (eg : public double computeNetSalary(){return 0;})

1.2 Mgr ->  state ---id,name,basic,deptId,perfBonus
            Add suitable constructor

            Methods ----
            1. compute net salary (formula: basic+perfBonus) -- override computeNetSalary


1.3 Worker-> state  --id,name,basic,deptId,hoursWorked,hourlyRate
            Methods :
                1.  compute net salary (formula:  = basic+(hoursWorked*hourlyRate) --override computeNetSalary
                2. get hrlyRate of the worker  -- add a new method to return hourly rate of a worker.(getter)

Create suitable array to store organization details.
Provide following options
    1. Hire Manager ---->I/P : all manager details
    2. Hire Worker ----->I/P : all worker details
    3. Display information of all employees net salary (by invoking computeNetSal),
    4. Exit
*/
#include <iostream>
using namespace std;

class Emp
{
protected:
    int id;
    int deptId;
    string name;
    double basicSal;

public:
    Emp(int i,int deptId, string name, double basicsal)
    {
        this->id=i;
        this->deptId=deptId;
        this->name=name;
        this->basicSal=basicsal;

    }
    virtual double computeNetSalary() =0;
   
    virtual void display()
    {
        cout<<"Employee detils are:"<<endl;
        cout << "ID: " << id << ", Name: " << name << ", Department ID: " << deptId << ", Basic Salary:"<< basicSal;
    }
};

class Mgr : public Emp
{
private:
    double perfBonus;

public:
    Mgr(int id,int deptId,string name,double basicsal, double perfBonus):Emp(id, deptId, name, basicsal)
    {
        this->perfBonus=perfBonus;
    }
    double computeNetSalary()
    {
        return basicSal + perfBonus;
    }
    
    void display()
    {
        Emp::display();
        cout << ", Performance Bonus: $"<< perfBonus << endl;
    }
};
class Worker : public Emp
{
private:
    double hoursWorked;
    double hourlyRate;
public:
    Worker(int id,int deptId,string name,double basicsal,double hoursWorked, double hourlyRate):Emp(id, deptId, name, basicsal)
    {
        this->hoursWorked=hoursWorked;
        this->hourlyRate=hourlyRate;
    }
    double computeNetSalary()
    {
        return basicSal + (hoursWorked * hourlyRate);
    }
    
    double getHourlyRate() const
    {
        return hourlyRate;
    }

    void display()
    {
        Emp::display();
        cout << ", Hours Worked: " << hoursWorked << ", Hourly Rate: $" << hourlyRate << endl;
    }
};

int main()
{
    const int MAX_EMPLOYEES = 100;
    Emp *employees[MAX_EMPLOYEES]; 
    int numEmployees = 0;          
    int choice;
    do
    {
        cout << "\nOptions:\n";
        cout << "1. Hire Manager\n";
        cout << "2. Hire Worker\n";
        cout << "3. Display information of all employees\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
        {
            int id, deptId;
            string name;
            double basicSalary, perfBonus;

            cout << "Enter Manager details:\n";
            cout << "ID: ";
            cin >> id;
            cout << "Name: ";
            cin.ignore();
            getline(cin, name);
            cout << "Department ID: ";
            cin >> deptId;
            cout << "Basic Salary: $";
            cin >> basicSalary;
            cout << "Performance Bonus: $";
            cin >> perfBonus;

            employees[numEmployees++] = new Mgr(id, deptId,name,basicSalary, perfBonus);
            cout<<"Manger Hired Successfully..........."<<endl;
            break;
        }
        case 2:
        {
            int id, deptId;
            string name;
            double basicSalary, hoursWorked, hourlyRate;

            cout << "Enter Worker details:\n";
            cout << "ID: ";
            cin >> id;
            cout << "Name: ";
            cin.ignore(); 
            getline(cin, name);
            cout << "Department ID: ";
            cin >> deptId;
            cout << "Basic Salary: $";
            cin >> basicSalary;
            cout << "Hours Worked: ";
            cin >> hoursWorked;
            cout << "Hourly Rate: $";
            cin >> hourlyRate;

            employees[numEmployees++] = new Worker(id, deptId, name, basicSalary, hoursWorked, hourlyRate);
             cout<<"Worker Hired Successfully..........."<<endl;
            break;
        }
        case 3:
        {
            cout << "Information of all employees:\n";
            for (int i = 0; i < numEmployees; ++i)
            {
                employees[i]->display();
            }
            break;
        }
        case 4:
        {
            cout << "Thank you.............\n";
            break;
        }
        default:
            cout << "Invalid choice enter write choice.\n";
        }
    } while (choice != 4);

    for (int i = 0; i < numEmployees; ++i)
    {
        delete employees[i];
    }

    return 0;
}
