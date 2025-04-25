#include <bits/stdc++>
using namespace std;

class Solution {
    public:
        vector<string> generateParenthesis(int n) {
            vector<string> ans;
            gen_string( n, "", ans,0,0);
            return ans;
        }
    
        void gen_string(int n, string ans, vector<string> &a,int open,int close) {
           if(open==n && close==n){
            a.push_back(ans);
            cout<<ans<<endl;
            return ;
           }
    
           if(open<n)
           gen_string(n,ans+"(",a,open+1,close);
           if(close<open)
           gen_string(n,ans+")",a,open,close+1);
        }
    };