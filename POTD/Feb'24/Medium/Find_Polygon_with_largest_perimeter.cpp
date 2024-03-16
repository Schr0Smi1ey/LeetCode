class Solution {
public:
    long long largestPerimeter(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n = nums.size();
        vector<long long int> v(nums.begin(),nums.end());
        for(int i = 1;i < n;i++){
            v[i] += v[i-1];
        }
        long long int ans = -1LL;
        for(int i = n-1;i >= 1 ;i--){
            if((v[i] - nums[i]) <= nums[i]){
                continue;
            }
            if(v[i] > ans){
                ans = v[i];
            }
        }
        return ans;
    }
};