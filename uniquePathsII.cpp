/**
 * @rohit
 */
class Solution {
public:
    int uniquePathsWithObstacles(vector<vector<int>>& grid) {
        int m = grid.size(), n = grid[0].size();
        vector<vector<int>> dp(m, vector<int>(n));
        if(grid[0][0] == 1) return 0;
        dp[0][0] = 1;
        for(int i = 0; i < m; i++) {
            for(int j = 0; j < n; j++) {
                if(i != 0 || j != 0) {
                    if(i == 0 && j != 0) {
                        if(grid[i][j] == 1) dp[i][j] = 0;
                        else {
                            if(dp[i][j-1] != 0)
                                dp[i][j] = 1;
                        }
                        
                    } else if(j == 0 && i != 0) {
                        if(grid[i][j] == 1) dp[i][j] = 0;
                        else {
                            if(dp[i-1][j] != 0)
                                dp[i][j] = 1;
                        }
                    } else {
                        if(grid[i][j] == 1) {
                            dp[i][j] = 0;
                        } else {
                            dp[i][j] = dp[i-1][j] + dp[i][j-1];
                        }
                    }
                }
            }
        }
        return dp[m-1][n-1];
    }
};