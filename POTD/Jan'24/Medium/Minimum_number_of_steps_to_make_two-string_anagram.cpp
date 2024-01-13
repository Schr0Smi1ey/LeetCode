class Solution {
public:
    int minSteps(string s, string t) {
        // int ans = 0,n = s.size();
        // map<char,int> ss,tt;
        // for(auto ch : s){
        //     ss[ch]++;
        // }
        // for(auto ch : t){
        //     tt[ch]++;
        // }
        // int have = 0;
        // for(auto x : ss){
        //     have += min(x.second,tt[x.first]);
        // }
        // return n - have;

        // int fre[26],n = s.size();
        // unordered_map<char,int> mp;
        // for(int i=0;i<n;i++){
        //     mp[s[i]]++;
        //     mp[t[i]]--;
        // }
        // int ans = 0;
        // for(auto x : mp){
        //     ans += max(0,x.second);
        // }
        // return ans;

        int fre[26] = {0},n = s.size();
        for(int i=0;i<n;i++){
            fre[s[i] - 'a']++;
            fre[t[i] - 'a']--;
        }
        int ans = 0;
        for(auto x : fre){
            ans += max(0,x);
        }
        return ans;
    }
};