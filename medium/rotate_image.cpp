#include <bits/stdc++>
using namespace std;

class Solution {
    public:
        void rotate(vector<vector<int>>& a) {
            
            for(int i=0;i<a[0].size();i++)
            {
                for(int j=0;j<=i;j++)
                {
                    int temp=a[i][j];
                    a[i][j]=a[j][i];
                    a[j][i]=temp;
                }
            }
    
            for(int i=0;i<a.size();i++)
            {
                for(int j=0;j<a[0].size()/2;j++)
                {
                    int temp=a[i][j];
                    a[i][j]=a[i][a[0].size()-1-j];
                    a[i][a[0].size()-1-j]=temp;
                }
            }
    
    
    
        }
    };