class Solution {
public:
    int minimumPushes(string word) {
        unordered_map<char,int> mp,fre;
        for(auto x : word){
            fre[x]++;
        }
        vector<pair<int,char>> w;
        for(auto x : fre){
            w.push_back({x.second,x.first});
        }
        sort(w.rbegin(),w.rend());
        int k = 1;
        for(int i=0;i<w.size();i++){
            mp[w[i].second] = k;
            if((i+1) % 8 == 0){
                k++;
            }
        }
        int ans = 0;
        for(auto x : word){
            ans += mp[x];
        }
        return ans;
    }
};