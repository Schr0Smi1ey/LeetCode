class Solution {
public:
    vector<vector<int>> findWinners(vector<vector<int>>& matches) {
        vector<vector<int>> ans(2);
        unordered_map<int,int> mp,np;
        int n = matches.size();
        for(int i = 0;i < n;i++){
            mp[matches[i][0]]++;
            np[matches[i][1]]++;
        }
        for(auto x : np){
            if(x.second == 1){
                ans[1].push_back(x.first);
            }
        }
        for(auto x : mp){
            if(np.find(x.first) == np.end()){
                ans[0].push_back(x.first);
            }
        }
        sort(ans[0].begin(),ans[0].end());
        sort(ans[1].begin(),ans[1].end());
        return ans;
    }
};