#include <iostream>
using namespace std;

int main(void)
{
    string str;
    cin >> str;
    int len = str.length();
    int count = 0;
    int apos = 0;
    int zpos = 0;
    for (int i = 0; i < len; i++)
    {
        if (str.at(i) == 'A' && apos == 0)
        {
            apos = i + 1;
        }
        if (str.at(i) == 'Z')
        {
            zpos = i + 1;
        }
    }
    cout << zpos - apos +1 << endl;
}