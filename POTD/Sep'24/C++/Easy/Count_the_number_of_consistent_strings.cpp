class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        int ans = 0,n = words.size();
        unordered_map<int,int> mp;
        for(auto ch : allowed) {
            mp[ch]++;
        }
        for(int i = 0;i < n; i++) {
            bool ok = true;
            for(auto ch : words[i]) {
                ok &= (mp.count(ch));
                if(!ok) break;
            }
            ans += ok;
        }
        return ans;
    }
};