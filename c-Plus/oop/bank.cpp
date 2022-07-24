#include <bits/stdc++.h>
using namespace std;
class Bank
{
public:
    string account_holder;
    string address;
    int age;
    int account_number;

protected:
    int balance;

private:
    string password;

public:
    Bank(string account_holder, int age, string address, string password)
    {
        this->account_holder = account_holder;
        this->address = address;
        this->password = password;
        this->account_number = rand() % 100000000;
        this->balance = 0;
        cout << "Your Account Number is : " << this->account_number << endl;
    }
    int show_balance(string password)
    {
        if (this->password == password)
        {
            return this->balance;
        }
        else
        {
            return -1;
        }
    }
    void add_money(string password, int amount)
    {
        if (this->password == password)
        {
            this->balance += amount;
        }
        else
        {
            cout << "Wrong Password Can't Add Money" << endl;
        }
    }
    // deposite money
    void deopsite_money(string password, int amount)
    {
        if (this->password == password)
        {
            this->balance -= amount;
        }
        else
        {
            cout << "Wrong Password Can't Add Money" << endl;
        }
    }
    friend class MyCash;
};
class MyCash
{
private:
    int balance;

public:
    MyCash()
    {
        this->balance = 0;
    }
    void add_money_from_bank(Bank *myac, string password, int amount)
    {
        if (myac->password == password)
        {
            this->balance += amount;
            myac->balance -= amount;
        }
    }
    int show_balance()
    {
        return this->balance;
    }
};

Bank *createAccount()
{
    cout << "Creating New Bank Account" << endl;
    cout << "Enter Account_holder/Age/Address/Password:" << endl;
    string account_holder, address, password;
    int age;
    cin >> account_holder >> age >> address >> password;
    Bank *myAccount = new Bank(account_holder, age, address, password);
    return myAccount;
}
void add_money(Bank *myac)
{
    cout << "Add money balance/password " << endl;
    string pass;
    int amount;
    cin >> amount >> pass;
    myac->add_money(pass, amount);
    cout << "Your Balance is : " << myac->show_balance(pass) << endl;
}
void deposite_money(Bank *myac)
{
    cout << "Deposite Money balance/password " << endl;
    string pass;
    int amount;
    cin >> amount >> pass;
    myac->deopsite_money(pass, amount);
    cout << "Your Balance is : " << myac->show_balance(pass) << endl;
}
void add_money_from_bank(Bank *myac, MyCash *mycash)
{
    cout << "Add Money From Bank> balance/password " << endl;
    string pass;
    int amount;
    cin >> amount >> pass;
    mycash->add_money_from_bank(myac, pass, amount);
    cout << "Your Bank Balance is : " << myac->show_balance(pass) << endl;
    cout << "Your MyCash Balance is : " << mycash->show_balance() << endl;
}
int main(void)
{
    Bank *ruhul = createAccount();
    MyCash *mycash = new MyCash();
Flag:
    cout << "Select From Menu:" << endl;
    cout << "1.Option-1 Add Money To Bank" << endl;
    cout << "2.Option-2 Deposite Money From Bank" << endl;
    cout << "3.Option-3 Add Money Bank to MyCash App" << endl;
    int option;
    cin >> option;
    if (option == 1)
    {
        add_money(ruhul);
    }
    else if (option == 2)
    {
        deposite_money(ruhul);
    }
    else if (option == 3)
    {
        add_money_from_bank(ruhul, mycash);
    }
    else
    {
        cout << "Invalid Option Select" << endl;
    }
    goto Flag;
}