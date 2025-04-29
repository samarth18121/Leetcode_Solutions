#include <bits/stdc++>
using namespace std;
class Solution {
    public:
        long long countSubarrays(vector<int>& a, int k) {
            int maxi = getmax(a);
            int i = 0, j = 0;
            long long ans = 0;
            long long cnt = 0;
    
            while (i < a.size()) {
                while (j < a.size() && cnt < k) {
                    if (a[j] == maxi)
                        cnt++;
                    j++;
                }
    
                if (cnt >= k) {
                    ans += a.size() - j + 1;
                }
    
                if (a[i] == maxi)
                    cnt--;
    
                i++;
            }
            return ans;
        }
    
        int getmax(vector<int>& a) {
            int maxi = INT_MIN;
            for (int i : a)
                if (i > maxi)
                    maxi = i;
    
            return maxi;
        }
    };