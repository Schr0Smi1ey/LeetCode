class Solution {
public:
    int numberOfSpecialChars(string word) {
        int ans = 0,n = word.size();
        map<char,int> mp;
        for(int i = 0;i < n;i++)
            mp[word[i]]++;
        for(int i = 0;i <n;i++){
            if(islower(word[i])){
                if(mp[word[i] - 32] > 0){
                    ans++;
                    mp[word[i]] = 0;
                    mp[word[i] - 32] = 0;
                }
            }
        }
        return ans;
    }
};