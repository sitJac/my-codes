// Solution 1:
class Solution {
public:
    int maxValue(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        vector<vector<int>> dp(m, vector<int>(n));
        for(int i = 0; i < m; i++) {
            for(int j = 0; j < n; j++) {
                if(i > 0) {
                    dp[i][j] = max(dp[i][j], dp[i-1][j]);
                }
                if(j > 0) {
                    dp[i][j] = max(dp[i][j], dp[i][j-1]);
                }
                dp[i][j] += grid[i][j];
            }
        }
        return dp[m-1][n-1];
    }
};

// Solution 2:
class Solution {
public:
    int maxValue(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        vector<vector<int>> dp(m+1, vector<int>(n+1));
        dp[0][0] = grid[0][0];
        for(int i = 1; i < m+1; i++) {
            for(int j = 1; j < n+1; j++) {
                dp[i][j] = max(dp[i-1][j], dp[i][j-1]) + grid[i-1][j-1];
            }
        }
        return dp[m][n];
    }
};