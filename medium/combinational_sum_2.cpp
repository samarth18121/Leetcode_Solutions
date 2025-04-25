#include <bits/stdc++>
using namespace std;

class Solution {
    public:
        vector<vector<int>> combinationSum2(vector<int>& a, int n) {
    
            vector<vector<int>> ans;
            vector<int> c;
            sort(a.begin(), a.end());
            solve(ans, a, n, 0, 0, c);
            sort(ans.begin(), ans.end());
            ans.erase(unique(ans.begin(), ans.end()), ans.end());
            return ans;
        }
    
        void solve(vector<vector<int>>& ans, vector<int>& a, int n, int start,
                   int sum, vector<int>& c) {
    
            if (sum == n) {
                ans.push_back(c);
                return;
            }
    
            for (int i = start; i < a.size(); i++) {
                if (i > start && a[i - 1] == a[i])
                    continue;
                if (sum + a[i] > n)
                    break;
                c.push_back(a[i]);
                solve(ans, a, n, i + 1, sum + a[i], c);
                c.pop_back();
            }
    
            // solve(ans, a, n, start + 1, sum, c);
        }
    };