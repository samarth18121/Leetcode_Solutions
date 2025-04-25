#include <bits/stdc++>
using namespace std;

class Solution {
    public:
        vector<vector<int>> combinationSum(vector<int>& a, int n) {
            vector<vector<int>> ans;
            vector<int> c;
            solve(ans, a, 0, 0, n, c);
            return ans;
        }
    
        void solve(vector<vector<int>>& ans, vector<int>& a, int i, int sum, int n,
                   vector<int> c) {
    
            if (i >= a.size() || sum > n)
                return;
            if (sum == n) {
                ans.push_back(c);
                return;
            }
    
            if (sum + a[i] <= n) {
                c.push_back(a[i]);
                solve(ans, a, i, sum + a[i], n, c);
                c.pop_back();
            }
    
            if (i < a.size() - 1) {
                solve(ans, a, i + 1, sum, n, c);
            }
        }
    };
    