// Friend Function and Friend Class in C++
#include <bits/stdc++.h>

using namespace std;
class Parent{
private:
int taka;
public:
    Parent(int tk){
        taka = tk;
    }
    friend class Pfriend;
};
class Pfriend{
    public:
    void tell(Parent *ptr){
        cout<<ptr->taka<<endl;
    }
};
int main(void){
    Parent pt(9999);
    Pfriend ptr;
    ptr.tell(&pt);

}