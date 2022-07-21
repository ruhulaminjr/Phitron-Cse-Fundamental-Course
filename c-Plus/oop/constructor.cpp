#include <bits/stdc++.h>

using namespace std;
class Batsman
{
private:
    int score;
    int best;
    int avg;

protected:
    int password;

public:
    Batsman(int s, int b, int a) // Batsman is constructor function
    {
        score = s;
        best = b;
        avg = a;
    }
    void print()
    {
        cout << "Score :" << score << endl
             << "Best :" << best << endl
             << "Avg: " << avg << endl;
    }
    void setPass(int pass) // setpass called setter function
    {
        password = pass;
    }
    void checkPass(int pass) // checkPass called getter funtion
    {
        if (password == pass)
        {
            cout << "Your Pasword Matched" << endl;
        }
        else
        {
            cout << "Wrong Password " << endl;
        }
    }
};
int main(void)
{
    Batsman tamim(88, 140, 44);
    tamim.print();
    tamim.setPass(4321);
    tamim.checkPass(4351);
}