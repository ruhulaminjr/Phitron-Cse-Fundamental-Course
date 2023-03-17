# Intuition
<!-- Describe your first thoughts on how to solve this problem. -->

# Approach
<!-- Describe your approach to solving the problem. -->

# Complexity
- Time complexity:
<!-- Add your time complexity here, e.g. $$O(n)$$ -->

- Space complexity:
<!-- Add your space complexity here, e.g. $$O(n)$$ -->

# Code
```
class Solution {
    int dp[201][201];
    int solve(int n,int m,vector<vector<int>>& grid){
        if(n == 0 && m == 0){
            return grid[n][m];
        }
        int ans1 = 1000000;
        int ans2 = 1000000;
        if(dp[n][m] != -1){
            return dp[n][m];
        }
        if(n > 0){
            ans1 = solve(n-1,m,grid) + grid[n][m];
        }
        if(m > 0){
            ans2 = solve(n,m-1,grid) + grid[n][m];
        }
        int ans = min(ans1,ans2);
        return dp[n][m] = ans;
    }
public:
    int minPathSum(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        for(int i = 0;i<=n;i++){
            for(int j = 0;j<=m;j++){
                dp[i][j] = -1;
            }
        }
        return solve(n-1,m-1,grid);

    }
};
```