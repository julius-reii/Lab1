//create a class name account
//contains string name, account number, balance which starts from zero
//number of account holder (static function that gives the total number of accounts)
//account number increments automatically and starts from 000001 (static)
//need constructor, default and parametrized and destructor, display method and setter method
//withdraw function -> if balance is greater or equal to withdraw amount and subtract the balance
//deposit function -> increases balance
//loan function-> can transfer balance to other accounts (optional)
//active state or not (boolean value) only use account when active
//need menu UI in terminal like atm to withdraw, deposit and loan

#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

class Account
{
private:
    string name;
    static long int acc;
    long int accNum;
    double balance;
    bool active;

public:
    Account()
    {
        this->name = "null";
        this->balance = 0.0;
        this->active = true;
        acc++;
        accNum = acc;
    }

    Account(string name, double balance)
    {
        this->name = name;
        this->balance = balance;
        this->active = true;
        acc++;
        accNum = acc;
    }

    void setAccount(string name, double balance)
    {
        this->name = name;
        this->balance = balance;
    }

    void showAccount()
    {
        cout << "Name: " << name << "       Balance: " << balance << "       Account number: " << setw(6) << setfill('0') << accNum  << "      Active Status: ";
        (this->active)? cout << "Active": cout << "Deactive";

        cout << endl;
    }

    static long int totalAccount()
    {
        return acc;
    }

    void withdraw(double amount);
    void deposit(double amount);
    void activeStatusChange();
    void Loan(Account& a, double amount);
    

    ~Account()
    {
        //destructor
    }
};

long int Account::acc = 0;

void Account::withdraw(double amount)
{
    if(this->balance >= amount && this->active)
    {
        cout << "Amount withdrawed succesfully, please collect the cash!" << endl;
        this->balance -= amount;
        cout << endl;
        this->showAccount();
    }
    else if(balance < amount)
    {
        cout << "You are poor!" << endl;
    }
    else
    {
        cout << "Account is Deactive" << endl;
    }
}

void Account::deposit(double amount)
{
    if(this->active)
    {
        this->balance += amount;
        cout << "Amount Deposited Succesfully!" << endl;
        cout << endl;
        this->showAccount();
    }
    else
    {
        cout << "Account is Deactive" << endl;
    }

}

void Account::activeStatusChange()
{
    this->active = (!active);
}

void Account::Loan(Account& a, double amount)
{
    if(this->balance >= amount && this->active)
    {
        this->balance -= amount;
        a.balance += amount;
        cout << amount << " Lended succesfully" << endl;
        cout << endl;
        this->showAccount();
        cout << endl;
        a.showAccount();
    }
    else if(this->balance < amount)
    {
        cout << "you are poor you cant lend!" << endl;
    }
    else
    {
        cout << "Account is deactive" << endl;
    }
}

int main()
{
    bool open = true;
    char c;
    int n, n1;
    float amount;
    string name;

    Account a[5];

    while (open)
    {
        cout << endl << endl << endl << endl;
        cout << "BANK" << endl << endl;

        cout << "1. Setup Account" << endl;
        cout << "2. Depost" << endl;
        cout << "3. Withdraw" << endl;
        cout << "4. Loan" << endl;
        cout << "5. Show info" << endl;
        cout << "6. Change Active Status" << endl;
        cout << "7. Show Total Number of accounts" << endl;

        cout << "Choose Options (1 - 7): ";
        cin >> n;

        switch(n)
        {
            case 1:
                cout << "Choose Account (1 - 5): ";
                cin >> n;
                if (n < 1 && n > 5)
                {
                    cout << "Invalid Account!";
                    break;
                }
                cout << "Enter Name: ";
                cin >> name;
                cout << "Enter Balance: ";
                cin >> amount;
                a[n-1].setAccount(name, amount);

                cout << "Account Setup Succesfully!!" << endl;

                a[n-1].showAccount();

                break;
            case 2:
                cout << "Choose Account (1 - 5): ";
                cin >> n;
                if (n < 1 && n > 5)
                {
                    cout << "Invalid Account!";
                    break;
                }
                cout << "Enter Amount To Deposit: ";
                cin >> amount;
                a[n-1].deposit(amount);
                break;
            case 3:
                cout << "Choose Account (1 - 5): ";
                cin >> n;
                if (n < 1 && n > 5)
                {
                    cout << "Invalid Account!";
                    break;
                }
                cout << "Enter Amount To Withdraw: ";
                cin >> amount;
                a[n-1].withdraw(amount);
                break;
            case 4:
                cout << "Choose Your Account To Loan(1 - 5): ";
                cin >> n;
                if (n < 1 && n > 5)
                {
                    cout << "Invalid Account!";
                    break;
                }
                cout << "Choose Second Account That Recieves Loan(1 - 5): ";
                cin >> n1;
                if (n1 < 1 && n1 > 5)
                {
                    cout << "Invalid Account!";
                    break;
                }
                cout << "Enter Amount To Loan: ";
                cin >> amount;
                a[n-1].Loan(a[n1-1], amount);
                break;
            case 5:
                cout << "Choose Account (1 - 5): ";
                cin >> n;
                if (n < 1 && n > 5)
                {
                    cout << "Invalid Account!";
                    break;
                }
                a[n-1].showAccount();
                break;
            case 6:
                cout << "Choose Account (1 - 5): ";
                cin >> n;
                if (n < 1 && n > 5)
                {
                    cout << "Invalid Account!";
                    break;
                }
                a[n-1].activeStatusChange();

                cout << endl;
                
                a[n-1].showAccount();
                break;
            case 7:
                cout << "Total Number of Accounts: " << Account::totalAccount() << endl;
                break;
            default:
                cout << "Invalid Input";
                break;
        }


        cout << "Do you want to exit? (Y/N): ";
        cin >> c;

        if(c == 'Y')
        {
            open = false;
        }

        cout << endl << endl << endl << endl;
        system("clear");
    }
    
    
    return 0;

}
