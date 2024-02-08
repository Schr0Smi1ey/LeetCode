class Solution {
public:
    int firstUniqChar(string s) {
        unordered_map<int,int> mp;
        for(auto x : s){
            mp[x]++;
        }
        int k = 0;
        for(auto ch : s){
            if(mp[ch] == 1) return k;
            k++;
        }
        return -1;
    }
};