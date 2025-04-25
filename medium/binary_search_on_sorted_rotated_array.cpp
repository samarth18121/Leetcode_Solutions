#include <bits/stdc++>
using namespace std;

class Solution {
    public:
        int search(vector<int>& a, int target) {
            int ans = -1;
            int n = a.size();
            int l = 0, r = n - 1;
            while (l <= r) {
                int mid = l + (r - l) / 2;
                if (a[mid] == target) {
                    ans = mid;
                    return ans;
                } else if (a[l] <= a[mid]) {
                    if (a[l] <= target && target <= a[mid])
                        r = mid - 1;
                    else
                        l = mid + 1;
    
                } else  {
                    if (a[mid] <= target && target <= a[r])
                        l = mid + 1;
                    else
                        r = mid - 1;
                }
            }
            return ans;
        }
    };