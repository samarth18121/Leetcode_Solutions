#include <bits/stdc++>
using namespace std;
class Solution {
    public:
        vector<vector<int>> threeSum(vector<int>& a) {
            vector<vector<int>> ans;
    
            sort(a.begin(), a.end());
            for (int i = 0; i < a.size() - 2; i++) {
                if (i > 0 && a[i] == a[i - 1])
                    continue;
                int j = i + 1;
                int k = a.size() - 1;
                while (j < k) {
    
                    if (a[i] + a[j] + a[k] == 0) {
                        vector<int> v;
                        v.push_back(a[i]);
                        v.push_back(a[j]);
                        v.push_back(a[k]);
                        ans.push_back(v);
    
                        while (j < k && a[j] == v[1])
                            j++;
                        while (j < k && a[k] == v[2])
                            k--;
                    } else if (a[i] + a[j] + a[k] < 0)
                        j++;
    
                    else if (a[i] + a[j] + a[k] > 0)
                        k--;
                }
            }
            int i = 0;
    
            return ans;
        }
    };