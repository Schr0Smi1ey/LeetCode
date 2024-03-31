class Solution {
public:
    long long countAlternatingSubarrays(vector<int>& nums) {
        int n = nums.size();
        long long int ans = n;
        bool flag = false;
        for(int i = 1,j = 1;i < n;i++){
            if(nums[i] == nums[i-1]){
                flag = true;
            }
            if(flag && nums[i] != nums[i-1]){
                flag = false;j = i;
            }
            if(!flag)
                ans += i - j + 1;
        }
        return ans;
    }
};