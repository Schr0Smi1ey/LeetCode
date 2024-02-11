class Solution {
public:
    int maximumLength(string s) {
        int n = s.size(),ans = -1;
        string temp = "";
        temp += s[0];
        int start = 0;
        for(int i=0;i<n;i++){
            if(i && s[i] == s[i-1]){
                temp += s[i];
            }
            else{
                temp = "";
                start = i;
                temp += s[i];
            }
            int index = s.find(temp,start+1);
            int k = 1;
            while(index != string::npos){
                k++;
                index = s.find(temp,index + 1);
            }
            if(k >= 3){
                ans = max(ans,(int)temp.size());
            }
            if(temp.size() >= 3){
                ans = max(ans,(int)temp.size()-2);
            }
        }
        return ans;
    }
};
#include<bits/stdc++.h>
struct pair_hash {
    template <class T1, class T2>
    std::size_t operator () (const std::pair<T1, T2>& p) const {
        auto h1 = std::hash<T1>{}(p.first);
        auto h2 = std::hash<T2>{}(p.second);
        return h1 ^ h2;
    }
};