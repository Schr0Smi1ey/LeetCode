class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map<char,char> mp,mp1;
        for(int i = 0;i < s.size();i++){
            if(mp.find(s[i]) == mp.end()){
                if(mp1.find(t[i]) == mp.end()){
                    mp[s[i]] = t[i];
                    mp1[t[i]] = s[i];
                }
            }
            s[i] = mp[s[i]];
        }
        return s == t;
    }
};