class Solution {
public:
    long long minOperationsToMakeMedianK(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int n = nums.size();
        long long int ans = abs(nums[n/2] - k);
        nums[(n/2)] = k;
        int i = n/2;
        while(i >= 1 && nums[i] < nums[i-1]){
            ans += abs(nums[i-1] - k);
            nums[i-1] = k;
            i--;
        }
        while(i <= n-2 && nums[i] > nums[i+1]){
            ans += abs(nums[i+1] - k);
            nums[i+1] = k;
            i++;
        }
        return ans;
    }
};