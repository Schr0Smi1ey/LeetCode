// Upsolved
class Solution {
public:
    int minimumSum(vector<int>& nums) {
        int n = nums.size();
        int min1[n],min2[n];
        min1[0] = nums[0];
        min2[n-1] = nums[n-1];
        for(int i=1;i<n;i++){
            min1[i] = min(min1[i-1],nums[i]);
            min2[n-i-1] = min(min2[n-i],nums[n-i-1]);
        }
        int result = -1;
        for(int i=0;i<n;i++){
            if(nums[i] > min1[i] && nums[i] > min2[i]){
                if(result == -1 || (result > (min1[i]+nums[i]+min2[i]))){
                    result = (min1[i]+nums[i]+min2[i]);
                }
            }
        }
        return result;
    }
};