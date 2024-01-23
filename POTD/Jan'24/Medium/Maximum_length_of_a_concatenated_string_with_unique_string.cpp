class Solution {
public:
    int solve(int i,vector<string> &ans,vector<string> &arr,unordered_map<string,int> &dp){
        if(i >= arr.size()) return 0;
        string cur = "";
        for(auto &val : ans){
            cur += val;
        }
        if(dp.find(cur) != dp.end()){
            return dp[cur];
        }
        ans.push_back(arr[i]);
        unordered_map<char,int> m;
        for(int i = 0; i < ans.size();i++){
            for(int j = 0;j < ans[i].size();j++){
                m[ans[i][j]]++;
            }
        }
        bool flag = true;
        for(auto &x : m){
            flag &= (x.second <= 1);
        }
        int take = 0, notTake = 0;
        if(flag){
            take = arr[i].size() + solve(i+1,ans,arr,dp);
        }
        ans.pop_back();
        notTake = solve(i+1,ans,arr,dp);
        return dp[cur] = max(take,notTake);
    }
    int maxLength(vector<string>& arr) {
        int n = arr.size();
        vector<string> ans;unordered_map<string,int> mp;
        return solve(0,ans,arr,mp);
    }
};