class Solution {
public:
    int solve(int ind,int n,vector<int>& startTime,vector<vector<int>> & jobs,vector<int> & dp){
        if(ind == n){
            return 0;
        }
        if(dp[ind] != -1){
            return dp[ind];
        }
        int next = lower_bound(startTime.begin(),startTime.end(),jobs[ind][1]) - startTime.begin();
        int take = jobs[ind][2] + solve(next,n,startTime,jobs,dp);
        int notTake = solve(ind+1,n,startTime,jobs,dp);
        return dp[ind] = max(take,notTake);
    }
    int jobScheduling(vector<int>& startTime, vector<int>& endTime, vector<int>& profit) {
        vector<vector<int>> jobs;
        int n = startTime.size();
        for(int i=0;i<n;i++){
            jobs.push_back({startTime[i],endTime[i],profit[i]});
        }
        sort(jobs.begin(),jobs.end());
        sort(startTime.begin(),startTime.end());
        vector<int> dp(n+1,-1);
        return solve(0,n,startTime,jobs,dp);
    }
};