class Solution {
public:
    int minOperations(string s) {
        int n = s.size(),ans = INT_MAX,cnt = 0;
        for(int i=0;i<n;i++){
            if((i&1) && s[i] == '1') 
            cnt++;
            else if(!(i&1) && s[i] == '0') cnt++;
        }
        ans = min(cnt,ans);
        cnt = 0;
        for(int i=0;i<n;i++){
            if((i&1) && s[i] == '0') 
            cnt++;
            else if(!(i&1) && s[i] == '1') cnt++;
        }
        ans = min(cnt,ans);
        return ans;
    }
};