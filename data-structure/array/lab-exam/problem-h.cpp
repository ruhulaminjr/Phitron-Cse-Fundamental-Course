#include <iostream>
#include <algorithm>
using namespace std;

int main(void)
{
    string str;
    cin >> str;
    int len = str.length();
    int flag = 0;
    int count = 0;
    for (int i = 0; i < len; i++)
    {
        if(str.at(i) == 'A'){
            flag = 1;
        }
        if(flag == 1){
            count++;
        }
        if (str.at(i) == 'Z')
        {
            flag = 0;
        }
    }
    cout<<count<<endl;
}