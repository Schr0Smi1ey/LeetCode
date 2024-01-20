class Solution {
public:
    int minimumCost(vector<int>& nums) {
        int sum = nums[0];
        vector<int> v(nums.begin()+1,nums.end());
        sort(v.begin(),v.end());
        sum += (v[0]+v[1]);
        return sum;
    }
};