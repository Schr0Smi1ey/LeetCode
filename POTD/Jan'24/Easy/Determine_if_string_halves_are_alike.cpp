class Solution {
public:
    bool halvesAreAlike(string s) {
        int cnt = 0,flag = 0;
        for(int i = 0;i < s.size();i++){
            s[i] = tolower(s[i]);
            int x = (s[i] == 'a' | s[i] == 'e' | s[i] == 'i' | s[i] == 'o' | s[i] == 'u');
            if(i < s.size()/2){
                flag += x;
            }
            cnt += x;
        }
        return (cnt % 2 == 0 && flag == cnt/2);
    }
};