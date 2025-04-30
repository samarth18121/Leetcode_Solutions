#include <bits/stdc++>
using namespace std;

class Solution {
    public:
        int minPathSum(vector<vector<int>>& a) {
            if (a[0].size() == 1 & a.size() == 1)
                return a[0][0];
            int m = a[0].size();
            int n = a.size();
            vector<vector<int>> dp(n, vector<int>(m, -1));
            int i = 0, j = 0;
            solve(a, i, j, n, m, dp);
    
            return dp[0][0];
        }
    
        int solve(vector<vector<int>>& a, int i, int j, int n, int m,
                  vector<vector<int>>& dp) {
            if (i >= n || j >= m)
                return INT_MAX;
            if (i == n - 1 && j == m - 1)
                return a[i][j];
    
            if (dp[i][j] != -1)
                return dp[i][j];
    
            return dp[i][j] = a[i][j] + min(solve(a, i, j + 1, n, m, dp),
                                            solve(a, i + 1, j, n, m, dp));
        }
    };