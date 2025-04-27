#include <bits/stdc++>
using namespace std;

class Solution {
    public:
        vector<int> searchRange(vector<int>& a, int n) {
            
           int i=first_target(a,n);
           int j=last_target(a,n);
            return vector<int>({i,j});
        }
    
        int first_target(vector<int>& a, int n){
            int l=0,r=a.size()-1;
            int ans=-1;
            while(l<=r){
                int mid=l+(r-l)/2;
                if(a[mid]==n){
                    ans=mid;
                    r=mid-1;
                }
                else if(a[mid]<n)
                {
                    l=mid+1;
                }
                else if(a[mid]>n){
                    r=mid-1;
                }
            }
    
            return ans;
        }
    
        int last_target(vector<int>& a, int n){
            int l=0,r=a.size()-1;
            int ans=-1;
            while(l<=r){
                int mid=l+(r-l)/2;
                if(a[mid]==n){
                    ans=mid;
                    l=mid+1;
                }
                else if(a[mid]<n)
                {
                    l=mid+1;
                }
                else if(a[mid]>n){
                    r=mid-1;
                }
            }
    
            return ans;
        }
    };