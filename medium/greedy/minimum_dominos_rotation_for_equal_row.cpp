class Solution {
    public:
        int minDominoRotations(vector<int>& t, vector<int>& b) {
            int ans = INT_MAX;
            for (int i = 1; i <= 6; i++) {
                int cntt = 0, cntb = 0;
    
                bool yes = true;
                for (int j = 0; j < t.size(); j++) {
                    if (t[j] == i) {
                    }
                
                else if (b[j] == i) {
                    cntt++;
                }
                else if (t[j] != i && b[j] != i) {
                    yes = false;
                    cntt = INT_MAX;
                    cntb = INT_MAX;
                    break;
                }
            }
    
            if (yes == true) {
                for (int j = 0; j < t.size(); j++) {
                    if (b[j] == i) {
    
                    } else if (t[j] == i) {
                        cntb++;
                    }
                }
            }
            if (cntt != INT_MAX && cntb != INT_MAX)
                ans = min(ans, min(cntt, cntb));
        }
        return ans != INT_MAX ? ans : -1;
        
    
    }
    }
    ;