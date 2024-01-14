class Solution {
public:
    bool closeStrings(string word1, string word2) {
        vector<int> fre1(26,0),fre2(26,0);
        for(auto ch : word1){
            fre1[ch - 'a']++;
        }
        for(auto ch : word2){
            fre2[ch - 'a']++;
        }
        for(int i=0;i<26;i++){
            if(fre1[i] && !fre2[i]){
                return false;
            }
        }
        sort(fre1.begin(),fre1.end());
        sort(fre2.begin(),fre2.end());
        return fre1 == fre2;
    }
};