class Solution {
public:

    int solve(vector<int>&nums,int n,int ind,int prev,vector<vector<int>> &dp){
        if(ind == n) return 0;
        if(dp[ind][prev+1] != -1){
            return dp[ind][prev+1];
        }
        int len = 0 + solve(nums,n,ind+1,prev,dp);
        if(prev == -1 || nums[ind] > nums[prev]){
            len = max(len,1 + solve(nums,n,ind+1,ind,dp));
        }
        return dp[ind][prev+1] = len;
    }
    int lengthOfLIS(vector<int>& nums) {
        // int n = nums.size();
        // vector<int> temp;
        // temp.push_back(nums[0]);
        // for(int i=1;i < n;i++){
        //     if(nums[i] > temp.back()){
        //         temp.push_back(nums[i]);
        //     }
        //     else{
        //         int ind = lower_bound(temp.begin(),temp.end(),nums[i]) - temp.begin();
        //         temp[ind] = nums[i];
        //     }
        // }
        // return temp.size();

        int n = nums.size();
        vector<vector<int>> dp(n,vector<int>(n+1,-1));
        return solve(nums,n,0,-1,dp);
    }
};