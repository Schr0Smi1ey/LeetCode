class Solution {
public:
    long long maxScore(vector<int>& a, vector<int>& b) {
        vector<long long> dp(5,-1e12);
        dp[0] = 0;
        for(int i = 0; i < b.size(); i++) {
            for(int k = 4;k > 0; k--) {
                dp[k] = max((long long) dp[k],(long long)dp[k - 1] + (long long)((long long)a[k - 1] * b[i]));
            }
        }
        return dp[4];
    }
};