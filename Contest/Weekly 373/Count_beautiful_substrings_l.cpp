class Solution {
public:
    bool isVowel(char ch){
        return (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u');
    }
    int beautifulSubstrings(string str, int k) {
        int cnt = 0;
        for(int i=0;i<str.size();i++){
            int cons = 0, vowel = 0;
            for(int j=i;j<str.size();j++){
                if(isVowel(str[j])) vowel++;
                else cons++;
                if(vowel == 0 || cons == 0) continue;
                if(vowel == cons && (vowel*cons) % k == 0){
                    cnt++;
                }
            }
        }
        return cnt;
    }
};