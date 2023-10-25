class Solution {
public:
    int countGoodSubstrings(string s) {
        int cnt = 0,i = 0;
        if(s.size() <3)
        return cnt;
        while(i <= (s.size() - 3)){
            if(s[i] != s[i+1] && s[i+1] != s[i+2] && s[i] != s[i+2]){
                cnt++;
            }
            i++;
        }
        return cnt;
    }
};