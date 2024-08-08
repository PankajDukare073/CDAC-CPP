/*
2:Create cpp application for bank account handling.
2.1. Create a class BankAccount --> acct no(int),customer name(string),balance(double)
                                    Add  constr. (2 constrs : first to accept all details )
2.2 Add Business logic methods
    Methods
        public void withdraw(double amt)
        public void deposit(double amt)

2.3: Create object of account class and test withdraw and deposit methods.
*/
#include <iostream>
#include <string>
using namespace std;
class BankAccount
{
private:
    int acctNo;
    string customerName;
    double balance;
public:
    BankAccount()
    {
        this->acctNo=123;
        this->customerName="xyz";
        this->balance=0.0;

    }
    BankAccount(int acctNo,string customerName, double balance)
    {
        this->acctNo=acctNo;
        this->customerName=customerName;
        this->balance=balance;
    }

    // Method to withdraw money
    void withdraw(double amt)
    {
        if (amt > balance)
        {
            cout << "Insufficient funds! Cannot withdraw." << endl;
        }
        else
        {
            balance -= amt;
            cout << "Withdrawal successful. Current balance: $" << balance << endl;
        }
    }

    // Method to deposit money
    void deposit(double amt)
    {
        balance += amt;
        cout << "Deposit successful. Current balance: $" << balance << endl;
    }

    // Getter methods
    int getAcctNo()
    {
        return acctNo;
    }

    string getCustomerName()
    {
        return customerName;
    }

    double getBalance()
    {
        return balance;
    }
};
int main()
{
    BankAccount account(173, "pankaj dukare", 1000.0);

    cout << "Account Details:" << endl;
    cout << "Account Number: " << account.getAcctNo() << endl;
    cout << "Customer Name: " << account.getCustomerName() << endl;
    cout << "Current Balance: $" << account.getBalance() << endl;

    cout << "\nTesting withdrawal of $500..." << endl;
    account.withdraw(500.0);

    cout << "\nTesting deposit of $2000..." << endl;
    account.deposit(2000.0);

    return 0;
}
