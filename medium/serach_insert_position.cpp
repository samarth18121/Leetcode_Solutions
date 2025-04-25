#include<bits/stdc++.h>
class Solution {
    public:
        int searchInsert(vector<int>& a, int target) {
            
            int l=0,r=a.size()-1;
            bool left=false,right=false;
            int ans=-1;
            while(l<=r){
                int mid=(l+r)/2;
                if(a[mid]==target)
                return mid;
                else if(a[mid]<target)
                {
                    ans=mid;
                    l=mid+1;
                    right=false;
                    left=true;
                }
                else if(a[mid]>target){
                    r=mid-1;
                    ans=mid;
                    right=true;
                    left=false;
                }
            }
            if(a[ans]<target)return ans+1;
            return ans;
        }
    };