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
};
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
    for (int i = 0; i < items; i++)
    {
        cout << "Enter Item " << i + 1 << " Code :" << endl;
        cin >> itemCode[i];
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
        int total_price = res.food_item_prices[idx] * quantity[i];
        cout << itemCode[i] << "             " << res.food_item_prices[idx] << "             " << quantity[i] << "              " << total_price << "            " << res.food_item_names[idx] << endl;
    }
    cout << "-----------------------------------------------------------------" << endl;
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