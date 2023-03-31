#include <iostream>
using namespace std;

int countColorings(int n) {
    int prev3 = 1, prev2 = 1, prev1 = 1;
    for (int i = 2; i <= n; i++) {
        int curr = prev1 + prev2 + prev3;
        prev3 = prev2;
        prev2 = prev1;
        prev1 = curr;
    }
    return prev1 + prev2 + prev3;
}

int main() {
    int n;
    cout << "Enter the number of trees: ";
    cin >> n;
    int numColorings = countColorings(n);
    cout << "Number of ways to color the trees: " << numColorings << endl;
    return 0;
}
