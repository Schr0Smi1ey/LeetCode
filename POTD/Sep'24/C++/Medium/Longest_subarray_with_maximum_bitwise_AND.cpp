class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int maxima = *max_element(nums.begin(),nums.end());
        int ans = 1,r = 0,aand = nums[0];
        for(int i = 1;i < nums.size(); i++) {
            aand &= nums[i];
            if(aand < maxima) {
                aand = nums[i];
                r = i;
            }
            ans = max(ans,i - r + 1);
        }
        return ans;
    }
};