#include <bits/stdc++.h>
using namespace std;
class Shop
{
private:
    int total_income;

public:
    string product_name[10];
    int product_price[10];
    int prodcut_quantity[10];
    void setTotal(int amount)
    {
        this->total_income += amount;
    }
    int getTotal()
    {
        return this->total_income;
    }
};
// void create_shop(Shop *myshop)
// {
//     cout << "How Many Product Wants To Add << 10" << endl;
//     int n;
//     cin >> n;
//     for (int i = 0; i < n; i++)
//     {
//         cout << "Enter Product Name/Price/Quantity:" << endl;
//         string name;
//         int price;
//         int qty;
//         cin >> name >> price >> qty;
//         myshop->product_name[i] = name;
//         myshop->product_price[i] = price;
//         myshop->prodcut_quantity[i] = qty;
//     }
// }

void print_prodcuts(Shop myshop, int n)
{
    cout << "                    BUY PRODUCTS                          " << endl;
    cout << "                  ________________                          " << endl;
    cout << "Product Index       " << endl;
    cout << "Product Name:       " << endl;
    cout << "Product Price       " << endl;
    cout << "Product Quantity    " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << i + 1;
        cout << myshop.product_name[i]<<endl;
        cout << myshop.product_price[i]<<endl;
        cout << myshop.prodcut_quantity[i];
        cout<<" ";
    }
}
int main(void)
{
    Shop myshop;
    cout << "Number Of Product: ";
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cout << "Product " << i + 1 << " Name: ";
        string name;
        cin >> name;
        cout << "Product " << i + 1 << " Price: ";
        int price;
        cin >> price;
        cout << "Product " << i + 1 << " Quantity: ";
        int qty;
        cin >> qty;
        myshop.product_name[i] = name;
        myshop.product_price[i] = price;
        myshop.prodcut_quantity[i] = qty;
    }
    print_prodcuts(myshop, n);
}
/*
Make a class named Shop. The members of Shop class is given below:
Shop
{
        string product_name[10];
        int product_price[10];
        int product_quantity[10];
        int total_income;
    }
    Make all members except the total_income as public. Make a getter and setter function for total_income so that we can know the total_income of that class.
    Take input of all members of the Shop class from the user.
    Make a system so that an user will see all products, price of those products, and the quantity. After that, the user can select which product he/she wants to buy.
*/