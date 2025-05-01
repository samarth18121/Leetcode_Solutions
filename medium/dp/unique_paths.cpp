#include <bits/stdc++>
using namespace std;

class Solution {
    public:
        int uniquePaths(int m, int n) {
            if(m==1 && n==1)return 1;
            int i = 0, j = 0;
            vector<vector<int>> dp(m, vector<int>(n, -1));
            solve(m, n, i, j, dp);
            return dp[0][0];
        }
    
        int solve(int m, int n, int i, int j, vector<vector<int>>& dp) {
            if (i >= m || j >= n)
                return 0;
            if (i == m-1 && j == n-1)
                return 1;
            if (dp[i][j] != -1)
                return dp[i][j];
    
            int right = solve(m, n, i + 1, j, dp);
            int down = solve(m, n, i, j + 1, dp);
    
            return dp[i][j] = right + down;
        }
    };