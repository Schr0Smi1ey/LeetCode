class Solution {
public:
    int lengthOfLastWord(string s) {
        int n = s.size(),ans = 0;
        bool flag = false;
        for(int i = n - 1;i >= 0;i--){
            if(s[i] != ' '){
                flag = true;
            }
            if(flag && s[i] == ' ')
                break;
            if(flag)
                ans++;
        }
        return ans;
    }
};