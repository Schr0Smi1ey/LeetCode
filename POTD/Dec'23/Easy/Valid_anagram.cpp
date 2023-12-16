class Solution {
public:
    bool isAnagram(string s, string t) {
        sort(s.begin(),s.end());
        sort(t.begin(),t.end());
        return s == t;
        // vector<int> ss(26,0),tt(26,0);
        // for(auto x : s){
        //     ss[x-'a']++;
        // }
        // for(auto x : t){
        //     tt[x-'a']++;
        // }
        // return ss == tt;
    }
};