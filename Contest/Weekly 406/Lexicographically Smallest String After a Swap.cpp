class Solution {
public:
    string getSmallestString(string s) {
        int n = s.size();
        for(int j = 1;j < n;j++){
            int i = j;
            if(i >= 1 && (s[i] < s[i-1]) && ((s[i] - '0') % 2) == ((s[i-1] - '0') % 2)){
                swap(s[i],s[i-1]);
                break;
            }
        }
        return s;
    }
};