#include<bits/stdc++.h>
struct pair_hash {
    template <class T1, class T2>
    std::size_t operator () (const std::pair<T1, T2>& p) const {
        auto h1 = std::hash<T1>{}(p.first);
        auto h2 = std::hash<T2>{}(p.second);
        return h1 ^ h2;
    }
};
class Solution {
public:
    int maximumLength(string s) {
        set<int> st[26];
        int n = s.size();
        unordered_map<pair<char,int>,int,pair_hash> mp;
        st[s[0] - 'a'].insert(1);
        mp[{s[0],1}]++;
        for(int i = 1; i<n; i++){
            int k = 1;char ch = s[i];
            while(s[i] == s[i-1]){
                mp[{ch,1}]++;k++;
                if(s[i+1] == s[i]){
                    i++;
                }
                else{
                    break;
                }
            }
            st[ch - 'a'].insert(k);
            mp[{ch,k}]++;
        }
        int ans = -1;
        for(auto x : mp){
            if(x.second >= 3){
                ans = max(ans,x.first.second);
            }
            else if(x.second == 2 && x.first.second >= 3){
                ans = max(ans,x.first.second -1);
            }
        }
        
        for(int i=0;i<26;i++){
            if(st[i].size()){
                vector<int> v(st[i].begin(),st[i].end());
                ans = max(ans,v[0]-2);
                for(int i=1;i<v.size();i++){
                    if(v[i] > v[i-1] && v[i] >= 3){
                        ans = max(ans,max(v[i-1],v[i]-2));
                    }
                }
            }
        }
        if(ans <= 0) return -1;
        return ans;
    }
};