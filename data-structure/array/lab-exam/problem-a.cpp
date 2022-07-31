#include <iostream>

using namespace std;

int main(void)
{
    int w[4];
    int count = 0;
    for (int i = 0; i < 4; i++)
    {
        cin >> w[i];
        if (w[i] >= 10)
        {
            count++;
        }
    }
    cout << count << endl;
}