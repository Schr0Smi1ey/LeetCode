class Solution {
public:
    int minFallingPathSum(vector<vector<int>>& matrix) {
        int n = matrix.size(),m = matrix[0].size(),ans = 1e9;
        vector<vector<int>> dp(n,vector<int>(m,0));
        for(int i=0;i<m;i++){
            dp[0][i] = matrix[0][i];
        }
        for(int i = 1;i < n;i++){
            for(int j = 0;j < m ;j++){
                int down = matrix[i][j] + dp[i-1][j],left = 1e9,right = 1e9;
                if(j - 1 >= 0){
                    left = matrix[i][j] + dp[i-1][j-1];
                }
                if(j + 1 < m){
                    right = matrix[i][j] + dp[i-1][j+1];
                }
                dp[i][j] = min(down,min(left,right));
            }
        }
        for(int i=0;i<m;i++){
            ans = min(ans,dp[n-1][i]);
        }
        return ans;
    }
};