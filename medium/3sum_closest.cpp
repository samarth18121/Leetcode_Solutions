#include <bits/stdc++>
using namespace std;
class Solution {
    public:
        int threeSumClosest(vector<int>& a, int target) {
            int cursum=a[0]+a[1]+a[2];
            sort(a.begin(), a.end());
            for (int i = 0; i < a.size() - 2; i++) {
                while (i > 0 && a[i] == a[i - 1])
                    continue;
    
                int j = i + 1;
                int k = a.size() - 1;
                while (j < k) {
                    int newsum=a[i]+a[j]+a[k];
                    if(newsum==target)return target;
                    if(abs(target-newsum)<abs(target-cursum))
                    cursum=newsum;
                    if(newsum<target)j++;
                    else k--;
                }
            }
            return cursum;
        }
    };