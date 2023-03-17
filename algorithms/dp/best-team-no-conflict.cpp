class Solution
{
    int dp[10000];
    int solve(int n, vector<pair<int, int>> &players)
    {
        if (dp[n] != -1)
        {
            return dp[n];
        }
        int ans = 1;
        for (int i = 0; i < n; i++)
        {
            if (players[n].score > players.score[i])
            {
                ans = max(ans, solve(i, players) + 1);
            }
        }
        return dp[n] = ans;
    }

public:
    int bestTeamScore(vector<int> &scores, vector<int> &ages)
    {
        int n = scores.size();
        vector<pair<int, int>> players(n);
        for (int i = 0; i < n; i++)
        {
            players[i] = {ages[i], scores[i]};
        }
        sort(players.begin(), players.end());
        memset(dp, -1, sizeof(dp));
        int ans = 0;
        for (int i = 0; i < n; i++)
        {
            ans = max(ans, solve(i));
        }
        return ans;
    }
};