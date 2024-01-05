class Solution {
public:
    vector<vector<int>> findMatrix(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int,int> mp;
        for(int i=0;i<n;i++){
            mp[nums[i]]++;
        }
        vector<vector<int>> ans;
        vector<pair<int,int>> v;
        for(auto x : mp){
            v.push_back({x.second,x.first});
        }
        sort(v.rbegin(),v.rend());
        for(int i=0;i<v.size();i++){
            if(i){
                for(int j = 0;j<v[i].first;j++){
                    ans[j].push_back(v[i].second);
                }
                continue;
            }
            while(v[i].first--){
                ans.push_back({v[i].second});
            }
        }
        return ans;
    }
};