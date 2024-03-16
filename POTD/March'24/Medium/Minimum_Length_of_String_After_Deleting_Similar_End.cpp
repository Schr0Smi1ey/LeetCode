class Solution {
public:
    int minimumLength(string s) {
        int n = s.size(),i = 0, j = s.size() - 1;
        while(i < j){
            if(s[i] == s[j]){
                char c = s[i];
                i++;j--;
                while(i < n && s[i] == c){
                    i++;
                }
                while(j >= 0 && s[j] == c){
                    j--;
                }
            }
            else break;
        }
        return (j - i + 1) > 0 ? j - i + 1 : 0;
    }
};