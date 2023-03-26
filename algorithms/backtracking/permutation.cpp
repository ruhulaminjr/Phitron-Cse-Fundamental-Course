#include <bits/stdc++.h>
using namespace std;
/*
    bacstrack(idx,state){
        if(solutionfound(idx)){
            anserlist.push(state);
            return;
        }

        for all valid state
            add  candidate to the stte
            backstrack(idx + 1, state)
            remove candidate from state;



    }
*/
vector<vector<int>> ans;
int n;
int arr[100];
bool solutionFound(int idx)
{
    return idx == n;
}
vector<int> getValidState(vector<int> state)
{
    map<int, int> taken;
    for (int x : state)
    {
        taken[x] = 1;
    }
    vector<int> cadidates;
    for (int i = 1; i <= n; i++)
    {
        if (taken.count(arr[i]) == 0)
        {
            cadidates.push_back(arr[i]);
        }
    }
    return cadidates;
}
void permutation(int idx, vector<int> state)
{
    // base Case
    if (solutionFound(idx))
    {
        ans.push_back(state);
        return;
    }
    vector<int> validCandidates = getValidState(state);
    for (int x : validCandidates)
    {
        state[idx] = x;
        permutation(idx + 1, state);
        state[idx] = 0;
    }
}
int main(void)
{

    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> arr[i];
    }
    vector<int> state(n);
    permutation(0, state);
    for (int i = 0; i < ans.size(); i++)
    {
        for (int x : ans[i])
        {
            cout << x << " ";
        }
        cout << endl;
    }
}