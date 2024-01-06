class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        long long int sum = 0LL;
        int ans = 1e6,i = 0, j = 0,n = nums.size();
        while(i < n){
            sum += nums[i];
            while(sum >= target){
                ans = min(ans,i - j + 1);
                sum -= nums[j++];
            }
            i++;
        }
        if(ans == 1e6) return 0;
        return ans;
    }
};