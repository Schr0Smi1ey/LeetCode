class Solution {
public:
    int maxLengthBetweenEqualCharacters(string s) {
        int n = s.size(), ans = -1;
        for(int i = 0;i<n;i++){
            int temp = 0;bool flag = false;
            for(int j = i+1;j<n;j++){
                if(s[j] == s[i]){ans = max(ans,temp);}
                temp++;
            }
        }
        return ans;
    }
};