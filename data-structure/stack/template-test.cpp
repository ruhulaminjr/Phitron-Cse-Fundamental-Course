#include <iostream>
using namespace std;
template <typename T>
T myMax(T a, T b)
{
    return a > b ? a : b;
}
int main(void)
{
    cout << myMax<int>(55, 99) << endl;
    cout << myMax<float>(5.6, 3.7) << endl;
    cout << myMax<char>('a', 'z') << endl;
}