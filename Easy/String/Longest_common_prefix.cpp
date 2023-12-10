class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string ans = "";
        for(int j = 0;j<strs[0].size();j++){
            bool flag = true;
            for(int i=1;i<strs.size();i++){
                flag &= (strs[i][j] == strs[0][j]);
            }
            if(flag) ans += strs[0][j];
            else break;
        }
        return ans;
    }
};