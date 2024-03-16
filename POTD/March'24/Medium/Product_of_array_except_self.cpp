class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        int prefix[n+1],suffix[n+1];
        prefix[0] = 1,suffix[n] = 1;
        for(int i=1;i <= n;i++){
            prefix[i] = nums[i-1] * prefix[i-1];
        }
        for(int i = n - 1;i >= 0; i--){
            suffix[i] = nums[i]*suffix[i+1];
        }
        vector<int> ans(n);
        for(int i=1;i <= n;i++){
            ans[i-1] = prefix[i-1]*suffix[i];
        }
        return ans;
    }
};