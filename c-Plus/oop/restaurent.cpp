#include <bits/stdc++.h>
using namespace std;
class Restaurant
{
protected:
    int total_tax;

public:
    int food_item_codes[12];
    string food_item_names[12];
    int food_item_prices[12];
    Restaurant()
    {
        this->total_tax = 0;
    }
    void update_tax(int amount)
    {
        this->total_tax += amount;
    }
};
int check(int idx, int n)
{
    if (idx >= n)
    {
        return 999;
    }
    else
    {
        return 0;
    }
}
void print_food(Restaurant res, int n)
{
    cout << "                       Make Bill                         " << endl;
    cout << "                      ------------                       " << endl;
    cout << "Item-Code         Item-Price            item-Name" << endl;
    for (int i = 0; i < n; i++)
    {

        cout << res.food_item_codes[i] << "               " << res.food_item_prices[i] << "                   " << res.food_item_names[i] << endl;
    }
}
void book_table(Restaurant res, int n)
{
    cout << "Enter Table No: " << endl;
    int tableno;
    cin >> tableno;
    cout << "Enter Number Of Items: " << endl;
    int items;
    cin >> items;
    int quantity[items];
    int itemCode[items];
    int total_price = 0;
    for (int i = 0; i < items; i++)
    {
        cout << "Enter Item " << i + 1 << " Code :" << endl;
        cin >> itemCode[i];
        while (check(distance(res.food_item_codes, find(res.food_item_codes, res.food_item_codes + n, itemCode[i])), n))
        {
            cout << "Opps You Entered Wrong Item Code Enter Again:" << endl;
            cout << "Enter Item " << i + 1 << " Code Again :" << endl;
            cin >> itemCode[i];
        }
        cout << "Enter Item " << i + 1 << " Quantity :" << endl;
        cin >> quantity[i];
    }
    cout << "                       Bill Summary                        " << endl;
    cout << "                      ------------                       " << endl;
    cout << "Table No : " << tableno << endl;
    cout << "Item-Code     Item-Price     Item-Quantity     Total-Price     Item-Name" << endl;
    for (int i = 0; i < items; i++)
    {
        int idx = distance(res.food_item_codes, find(res.food_item_codes, res.food_item_codes + n, itemCode[i]));
        int total = res.food_item_prices[idx] * quantity[i];
        total_price += total;
        cout << itemCode[i] << "             " << res.food_item_prices[idx] << "             " << quantity[i] << "              " << total << "            " << res.food_item_names[idx] << endl;
    }
    cout << "-----------------------------------------------------------------------------" << endl;
    double tax = (double(total_price) * 5) / 100;
    cout << "Tax:                                                         " << tax << endl;
    cout << "-----------------------------------------------------------------------------" << endl;
    double net_total = tax + double(total_price);
    cout << "Net-Total                                                    " << fixed << setprecision(2) << net_total << endl;
    res.update_tax(int(tax));
}

int main(void)
{
    Restaurant myres;

    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int codes;
        string name;
        int price;
        cin >> codes;
        cin >> ws;
        getline(cin, name);
        cin >> price;
        myres.food_item_codes[i] = codes;
        myres.food_item_names[i] = name;
        myres.food_item_prices[i] = price;
    }
    print_food(myres, n);
    book_table(myres, n);
}