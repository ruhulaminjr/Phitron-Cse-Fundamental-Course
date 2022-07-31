#include <iostream>

using namespace std;

int main(void)
{
    int n;
    cin >> n;
    int num =0;
    int x = n;
    while (n > 0)
    {
        int d = n % 10;
        num += d;
        num *= 10;
        n /= 10;
    }
    num /=10;
    if(num == x){
        cout << "Yes"<<endl;
    }else{
        cout << "No"<<endl;
    }
}