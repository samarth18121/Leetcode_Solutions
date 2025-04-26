#include <bits/stdc++>
using namespace std;

class Solution {
    public:
        string convert(string s, int n) {
            if (n == 1)
                return s;
    
            vector<string> a(n);
    
            int row = 0;
            int direction = -1;
            string ans = "";
    
            for (char c : s) {
                a[row] += c;
                if (row == 0)
                    direction = 1;
                if (row == n - 1)
                    direction = -1;
                row += direction;
            }
    
            for (auto it : a)
                ans += it;
    
            return ans;
        }
    };