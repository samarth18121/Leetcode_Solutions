#include <bits/stdc++>
using namespace std;
class Solution {
    public:
        bool canJump(vector<int>& a) {
            vector<int> dp(a.size(), -1);
            bool x = solve(a, 0, a.size() - 1, false, dp);
            if (x == true || dp[a.size() - 1] == 1)
                return true;
            return false;
        }
    
        bool solve(vector<int>& a, int i, int n, bool ans, vector<int>& dp) {
            if (i == n)
                return dp[i] = 1;
    
            if (i > n)
                return dp[i] = 0;
    
            if (dp[i] != -1)
                return dp[i];
            for (int j = 1; j <= a[i]; j++) {
                ans |= solve(a, i + j, n, ans, dp);
                if (ans == true)
                    return dp[i] = 1;
            }
    
            dp[i] = ans == true ? 1 : 0;
            return ans;
        }
    };