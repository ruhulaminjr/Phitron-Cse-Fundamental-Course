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
    cout << "Add monery balance/password " << endl;
    string pass;
    int amount;
    cin >> amount >> pass;
    myac->add_money(pass, amount);
    cout << "Your Balance is : " << myac->show_balance(pass) << endl;
}
int main(void)
{
    Bank *ruhul = createAccount();
    add_money(ruhul);
}