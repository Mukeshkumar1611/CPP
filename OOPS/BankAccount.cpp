

#include <iostream>
using namespace std;

class Bank
{
    long long accNumber;
    string name;
    int availableBalance = 10000;

public:
    void initializing(void)
    {
        cout << "Welcome To Indian Bank !!" << endl;
        cout << "PLease Enter Your Bank Details Below : " << endl
             << endl;

        cout << "Enter Bank Account Number : " << endl;
        cin >> accNumber;

        cout << "Enter Your Name : " << endl;
        cin >> name;
    }

    void deposit(void)
    {
        int bal;
        cout << "Enter Amount You Want To Deposit : " << endl;
        cin >> bal;
        availableBalance = availableBalance + bal;
        cout << "Ammount Deposited Successfully !" << endl
             << endl;
    }

    void withDrawl(void)
    {
        cout << "Available Balance : " << availableBalance << "/-" << endl;
        int bal;
        cout << "Enter Amount You Want To Withdraw : " << endl;
        cin >> bal;
        if (bal < availableBalance)
        {
            availableBalance = availableBalance - bal;
            cout << "Ammount Withdrawl Successfully !" << endl
                 << endl;
        }
        else
        {
            cout << "Sorry, Insufficient Amount !!!" << endl
                 << endl;
        }
    }

    void display(void)
    {
        int lastFourDigit = accNumber % 10000;

        cout << "Mr./Mrs. " << name << " Your Available Balance of Saving Acc. ending with Account Number XXXX-XXXX-"
             << lastFourDigit << " is Rs. " << availableBalance << "/-" << endl;
        cout << "Thanks !" << endl;
    }
};

int main()
{
    Bank mk;
    mk.initializing();
    cout << "Select An Option Below :" << endl;
    cout << "Press 1. for Cash Deposit" << endl;
    cout << "Press 2. for Cash Withdrawl" << endl;

    int i;
    cin >> i;

    if (i == 1)
    {
        mk.deposit();
    }

    else if (i == 2)
    {
        mk.withDrawl();
    }

    else
    {
        cout << "Selection Type : Invalid" << endl;
    }

    mk.display();

    return 0;
   
}
