class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {
        int n = nums.size(),sum = 0;
        unordered_map<int,int> mp;
        for(int i = 0;i < n;i++){
            sum += nums[i];
            if((sum % k == 0) && i > 0)
                return true;
            int rem = sum % k;
            if(mp.find(rem) == mp.end())
                mp[rem] = i;
            else if(i - mp[rem] > 1)
                return true;
        }
        return false;
    }
};